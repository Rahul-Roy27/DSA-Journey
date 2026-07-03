# Merge Sort (Part 1 - Divide & Conquer)

## 📌 Definition

**Merge Sort** is a **Divide and Conquer** sorting algorithm that recursively divides an array into smaller halves until each subarray contains only one element, then merges the sorted subarrays to obtain the final sorted array.

Unlike Selection Sort, Bubble Sort, and Insertion Sort, Merge Sort **does not sort directly**. Instead, it first divides the problem into smaller problems.

---

# 💡 One-Line Intuition

> **Divide the array into smaller halves until one element remains, then merge the sorted halves back together.**

---

# 🧠 Main Idea

Merge Sort follows the **Divide and Conquer** approach.

It has **three phases**:

1. **Divide** the array into two halves.
2. **Conquer** by recursively dividing until one element remains.
3. **Merge** the sorted halves.

---

# What is Divide and Conquer?

Instead of sorting the entire array at once,

Merge Sort says:

> "This problem is too big. I'll divide it into smaller problems."

Example:

```text
8 3 4 12 5 6 1 9
```

↓

```text
8 3 4 12 | 5 6 1 9
```

↓

```text
8 3 | 4 12 | 5 6 | 1 9
```

↓

```text
8 | 3 | 4 | 12 | 5 | 6 | 1 | 9
```

Now every subarray contains only one element.

---

# Why Stop at One Element?

Because every array with one element is already sorted.

Example

```text
[8]
```

Already sorted.

```text
[3]
```

Already sorted.

Therefore,

```cpp
if(low >= high)
    return;
```

is the **base case**.

---

# Important Concept

## Merge Sort DOES NOT create new arrays while dividing.

This is one of the biggest misconceptions.

Many students think

```text
8 3 4 12

5 6 1 9
```

becomes two separate arrays.

❌ Wrong.

The original array remains the same.

Merge Sort only works with **different index ranges**.

---

# Example

Array

```text
Index : 0 1 2 3 4 5 6 7
Value : 8 3 4 12 5 6 1 9
```

Initially

```cpp
low = 0
high = 7
```

Find the middle

```cpp
mid = (low + high) / 2;
```

Result

```text
mid = 3
```

Now divide into

```text
Left  : low → mid

0 → 3
```

```text
Right : mid+1 → high

4 → 7
```

Notice

No new arrays were created.

Only the range changed.

---

# Division Process

First call

```cpp
mergeSort(arr, 0, 7);
```

↓

Find middle

```cpp
mid = 3;
```

↓

Recursive calls

```cpp
mergeSort(arr, 0, 3);

mergeSort(arr, 4, 7);
```

Now the left half

```cpp
mergeSort(arr, 0, 3);
```

↓

```cpp
mid = 1;
```

↓

```cpp
mergeSort(arr, 0, 1);

mergeSort(arr, 2, 3);
```

Again

```cpp
mergeSort(arr, 0, 1);
```

↓

```cpp
mid = 0;
```

↓

```cpp
mergeSort(arr, 0, 0);

mergeSort(arr, 1, 1);
```

Since

```cpp
low == high
```

the recursion stops.

---

# Recursion Tree

```text
mergeSort(0,7)
│
├── mergeSort(0,3)
│   │
│   ├── mergeSort(0,1)
│   │   │
│   │   ├── mergeSort(0,0) ✅ Stop
│   │   └── mergeSort(1,1) ✅ Stop
│   │
│   └── mergeSort(2,3)
│       ├── mergeSort(2,2) ✅ Stop
│       └── mergeSort(3,3) ✅ Stop
│
└── mergeSort(4,7)
    ...
```

---

# Why Two Functions?

Merge Sort is divided into **two separate functions**.

## 1. mergeSort()

Responsible only for dividing the array.

It

* finds the middle
* recursively divides left
* recursively divides right

It **does not merge**.

---

## 2. merge()

Responsible only for combining two already sorted halves.

It

* compares both halves
* creates a sorted temporary array
* copies the result back

It **does not divide**.

---

# Responsibilities

| Function      | Job                     |
| ------------- | ----------------------- |
| `mergeSort()` | Divide recursively      |
| `merge()`     | Merge two sorted halves |

---

# mergeSort() Code

```cpp
void mergeSort(int arr[], int low, int high)
{
    if(low >= high)
        return;

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);

    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}
```

---

# Understanding mergeSort()

```cpp
if(low >= high)
```

Stop dividing.

---

```cpp
int mid = (low + high) / 2;
```

Find the middle index.

---

```cpp
mergeSort(arr, low, mid);
```

Recursively divide the left half.

---

```cpp
mergeSort(arr, mid+1, high);
```

Recursively divide the right half.

---

```cpp
merge(arr, low, mid, high);
```

Merge both sorted halves.

---

# The Merge Phase

Once every recursive call reaches one element,

Merge Sort starts coming back.

Now the `merge()` function combines

```text
[8]

and

[3]
```

↓

```text
[3,8]
```

Then

```text
[3,8]

and

[4,12]
```

↓

```text
[3,4,8,12]
```

Eventually,

the entire array becomes sorted.

---

# Important Observations

* Merge Sort uses **Recursion**.
* It follows the **Divide and Conquer** technique.
* The array is divided using **indices**, not new arrays.
* A one-element array is already sorted.
* `mergeSort()` only divides.
* `merge()` performs the actual sorting.

---

# Memory Tricks

### Divide

```text
low → mid

mid+1 → high
```

---

### Base Case

```cpp
if(low >= high)
    return;
```

One element is already sorted.

---

### Responsibilities

```text
mergeSort()

↓

Divide
```

```text
merge()

↓

Merge
```

---

# Summary

* Merge Sort is based on **Divide and Conquer**.
* Divide the array until every subarray has one element.
* Division happens using **index ranges**, not new arrays.
* `mergeSort()` recursively divides the array.
* `merge()` combines two sorted halves.
* The actual sorting happens during the merge phase.
* Merge Sort uses two functions with different responsibilities.
