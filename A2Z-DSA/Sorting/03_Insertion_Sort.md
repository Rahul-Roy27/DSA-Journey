# Insertion Sort

## 📌 Definition

**Insertion Sort** is a comparison-based sorting algorithm that **builds the sorted array one element at a time**.

It picks one element from the unsorted part and **inserts it into its correct position** in the already sorted part by **shifting larger elements to the right**.

---

# 💡 One-Line Intuition

> **Pick one element, shift larger elements to the right, and insert it into its correct position.**

---

# 🃏 Real-Life Analogy

Imagine you're holding playing cards.

Every time you receive a new card, you don't reshuffle all the cards.

Instead:

* Find where the new card belongs.
* Move the larger cards one position to the right.
* Insert the new card.

This is exactly how Insertion Sort works.

---

# 🧠 Main Idea

The array is divided into two parts.

```text
Sorted Part | Unsorted Part
```

Initially,

```text
5 | 3 8 4 2
```

The **first element is always considered sorted**.

Now keep taking one element from the unsorted part and insert it into the sorted part.

---

# 📋 Algorithm (English)

1. Consider the first element as already sorted.
2. Pick the next element (called **key**).
3. Compare the key with elements to its left.
4. Shift every element greater than the key one position to the right.
5. Insert the key into the empty position.
6. Repeat until the array is sorted.

---

# 🔍 Dry Run

Input:

```text
5 3 8 4 2
```

---

## Pass 1

Current key

```text
5 | 3 8 4 2
    ↑
```

3 belongs before 5.

Shift 5.

```text
5 5 8 4 2
```

Insert 3.

```text
3 5 | 8 4 2
```

---

## Pass 2

Current key

```text
3 5 | 8 4 2
      ↑
```

8 is already greater than 5.

No shifting.

```text
3 5 8 | 4 2
```

---

## Pass 3

Current key

```text
3 5 8 | 4 2
        ↑
```

Shift 8.

```text
3 5 8 8 2
```

Shift 5.

```text
3 5 5 8 2
```

Insert 4.

```text
3 4 5 8 | 2
```

---

## Pass 4

Current key

```text
3 4 5 8 | 2
          ↑
```

Shift 8.

Shift 5.

Shift 4.

Shift 3.

Insert 2.

```text
2 3 4 5 8
```

---

# 💻 C++ Code

```cpp
#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    // Start from the second element
    // because the first element is already sorted
    for (int i = 1; i < n; i++)
    {
        // Store the current element
        int key = arr[i];

        // Compare with previous elements
        int j = i - 1;

        // Shift larger elements to the right
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert key into the correct position
        arr[j + 1] = key;
    }
}
```

---

# 🧠 Code Explanation

## Step 1

```cpp
int key = arr[i];
```

Store the current element.

Example:

```text
3 5 8 4
      ↑
```

Save it.

```text
key = 4
```

Think of it as putting **4 in your pocket** before changing the array.

---

## Step 2

```cpp
int j = i - 1;
```

Start comparing from the previous element.

Example

```text
3 5 8 4
    ↑ ↑
    j i
```

---

## Step 3

```cpp
while (j >= 0 && arr[j] > key)
```

Keep moving left while:

* you're inside the array
* and the previous element is greater than the key

---

## Step 4

```cpp
arr[j + 1] = arr[j];
```

This **shifts** the larger element one position to the right.

Example

Before

```text
3 5 8 _
```

Shift 8

```text
3 5 _ 8
```

Shift 5

```text
3 _ 5 8
```

Notice:

We are **not swapping**.

We are only creating an empty space.

---

## Step 5

```cpp
j--;
```

Move one position left.

Example

```text
3 5 8 4
    ↑
    j
```

↓

```text
3 5 8 4
  ↑
  j
```

We keep checking previous elements until we find where the key belongs.

---

## Step 6

```cpp
arr[j + 1] = key;
```

Insert the saved element into the empty position.

Example

```text
3 _ 5 8
```

↓

```text
3 4 5 8
```

---

# ❓ Doubt 1: Where is the swapping?

**There is NO swapping in Insertion Sort.**

Bubble Sort:

```cpp
swap(arr[j], arr[j + 1]);
```

⬇️ Exchange two elements.

Insertion Sort:

```cpp
arr[j + 1] = arr[j];
```

⬇️ Shift one element to the right.

Then

```cpp
arr[j + 1] = key;
```

⬇️ Insert the saved element.

So Insertion Sort uses **shifting**, not swapping.

---

# ❓ Doubt 2: Won't `arr[j + 1] = arr[j]` overwrite the value?

Example

```text
3 5 8 4
```

You first save

```cpp
key = 4;
```

Now even if the array becomes

```text
3 5 8 8
```

it's okay because

```text
key = 4
```

The value is safely stored in `key`.

Think of `key` as your **temporary pocket**.

---

# ❓ Doubt 3: Why do we write `arr[j + 1] = arr[j]`?

Because we want to move the larger element.

Example

```text
3 5 8 4
```

8 is larger than 4.

Move 8.

```text
3 5 8 8
```

Not

```cpp
arr[j + 1] = arr[i];
```

because `arr[i]` is the element we're trying to insert, not the element we're shifting.

---

# ❓ Doubt 4: Why `j--`?

Because we must keep checking previous elements.

Example

```text
3 5 8 4
```

Check

```text
8 > 4
```

↓

Move left.

Check

```text
5 > 4
```

↓

Move left.

Check

```text
3 > 4
```

↓

Stop.

Without `j--`, we'd keep checking the same element forever.

---

# ⚔️ Shift vs Swap

## Swap

```text
5 3

↓

3 5
```

Both elements exchange positions.

```cpp
swap(arr[i], arr[j]);
```

---

## Shift

```text
3 5 8 _
```

↓

```text
3 5 _ 8
```

↓

```text
3 _ 5 8
```

↓

```text
3 4 5 8
```

Elements only move one position.

No swapping happens.

---

# ⏱ Time Complexity

| Case    | Complexity |
| ------- | ---------- |
| Best    | O(n)       |
| Average | O(n²)      |
| Worst   | O(n²)      |

---

# 💾 Space Complexity

```text
O(1)
```

---

# 📌 Properties

| Property | Value |
| -------- | ----- |
| In-place | ✅ Yes |
| Stable   | ✅ Yes |
| Adaptive | ✅ Yes |

---

# 🧠 Memory Trick

### Selection Sort

> Find → Select → Swap

### Bubble Sort

> Compare → Swap → Repeat

### Insertion Sort

> **Pick → Shift → Insert**

---

# 📖 Summary

* The first element is considered sorted.
* Pick the next element (**key**).
* Compare it with previous elements.
* Shift all larger elements to the right.
* Insert the key into the empty position.
* **No swapping is used.**
* The key is stored first, so it is never lost while shifting.
* Stable, adaptive, and in-place sorting algorithm.
