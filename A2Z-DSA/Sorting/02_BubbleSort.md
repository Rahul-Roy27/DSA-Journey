# Bubble Sort

## 📌 Definition

**Bubble Sort** is a simple comparison-based sorting algorithm that repeatedly **compares adjacent elements** and swaps them if they are in the wrong order.

After every pass, the **largest unsorted element "bubbles up" to its correct position at the end of the array.**

---

# 💡 Intuition

Imagine bubbles rising to the surface of water.

Similarly, in Bubble Sort, the **largest element moves to the end** after each pass through adjacent swaps.

Unlike Selection Sort (which finds the minimum element), Bubble Sort only compares **neighboring elements**.

---

# 📝 Algorithm

For every pass:

1. Start from the beginning of the array.
2. Compare every pair of adjacent elements.
3. If the left element is greater than the right element, swap them.
4. Continue until the largest element reaches the end.
5. Ignore the sorted part in the next pass.

---

# 🔍 Dry Run

### Input

```text
5 3 8 4 2
```

---

### Pass 1

Compare adjacent elements.

```text
5 3 8 4 2

5 > 3 → Swap
```

```text
3 5 8 4 2
```

Compare

```text
5 8
```

Already correct.

```text
3 5 8 4 2
```

Compare

```text
8 4
```

Swap.

```text
3 5 4 8 2
```

Compare

```text
8 2
```

Swap.

```text
3 5 4 2 8
```

Largest element is now fixed.

```text
3 5 4 2 | 8
```

---

### Pass 2

Ignore the last element.

```text
3 5 4 2 | 8
```

Compare

```text
3 5
```

Correct.

Compare

```text
5 4
```

Swap.

```text
3 4 5 2 8
```

Compare

```text
5 2
```

Swap.

```text
3 4 2 5 8
```

Now,

```text
3 4 2 | 5 8
```

---

### Pass 3

```text
3 4 2 | 5 8
```

↓

```text
3 2 4 | 5 8
```

---

### Pass 4

```text
3 2 | 4 5 8
```

↓

```text
2 3 4 5 8
```

---

# 🧠 Visual Representation

```text
Initial

5 3 8 4 2 | []

↓

3 5 4 2 | 8

↓

3 4 2 | 5 8

↓

3 2 | 4 5 8

↓

2 3 | 4 5 8

↓

2 3 4 5 8
```

---

# 💻 C++ Implementation

```cpp
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // Number of passes
    for (int i = 0; i < n - 1; i++)
    {
        // Compare adjacent elements
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
```

---

# 🚀 Optimized Bubble Sort

If during a pass **no swaps occur**, the array is already sorted.

We can stop immediately.

```cpp
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}
```

---

# ⏱ Time Complexity

## Normal Bubble Sort

| Case | Complexity |
|------|------------|
| Best | **O(n²)** |
| Average | **O(n²)** |
| Worst | **O(n²)** |

---

## Optimized Bubble Sort

| Case | Complexity |
|------|------------|
| Best | **O(n)** |
| Average | **O(n²)** |
| Worst | **O(n²)** |

---

# 💾 Space Complexity

```text
O(1)
```

No extra memory is used.

---

# 🔄 Number of Comparisons

Total comparisons:

```text
(n - 1) + (n - 2) + ... + 2 + 1

= n(n - 1) / 2
```

Hence,

```text
O(n²)
```

---

# 🔁 Number of Swaps

### Best Case

Already sorted.

```text
0 swaps
```

### Worst Case

Maximum possible adjacent swaps.

```text
O(n²)
```

---

# 📌 Properties

| Property | Value |
|----------|-------|
| Sorting Type | Comparison Sort |
| In-place | ✅ Yes |
| Stable | ✅ Yes |
| Adaptive | ✅ (Optimized Version) |
| Recursive | ❌ No |

---

# 🤔 Why is Bubble Sort Stable?

Consider

```text
4a 4b 2
```

Bubble Sort swaps **only when**

```cpp
arr[j] > arr[j+1]
```

It **does not swap equal elements**.

So

```text
4a 4b
```

remains

```text
4a 4b
```

Their relative order is preserved.

Hence,

**Bubble Sort is Stable.**

---

# 📚 Advantages

- Very easy to understand.
- Easy to implement.
- Stable sorting algorithm.
- Can be optimized to run in **O(n)** for already sorted arrays.
- Useful for learning sorting concepts.

---

# ❌ Disadvantages

- Very slow for large datasets.
- Time complexity is generally **O(n²)**.
- Performs many swaps.
- Rarely used in real-world applications.

---

# 🎯 When Should You Use Bubble Sort?

Bubble Sort is mainly used for:

- Learning sorting algorithms.
- Very small datasets.
- Detecting whether an array is already sorted (optimized version).

It is **rarely used in production** because algorithms like Merge Sort, Quick Sort, and Heap Sort are much faster.

---

# 🧠 Key Points to Remember

- Compare **adjacent elements**.
- Swap if they are in the wrong order.
- Largest element reaches the end after every pass.
- Sorted part grows from **right to left**.
- After each pass, one less comparison is needed.
- Optimized Bubble Sort stops early if no swaps occur.
- Stable sorting algorithm.
- In-place sorting algorithm.

---

# 📊 Complexity Summary

| Feature | Value |
|---------|-------|
| Best Time | O(n) *(Optimized)* |
| Average Time | O(n²) |
| Worst Time | O(n²) |
| Space | O(1) |
| Stable | ✅ |
| In-place | ✅ |
| Adaptive | ✅ *(Optimized Version)* |

---

# ⚔️ Selection Sort vs Bubble Sort

| Feature | Selection Sort | Bubble Sort |
|----------|----------------|-------------|
| Main Idea | Select minimum element | Swap adjacent elements |
| Sorted Part | Grows from left | Grows from right |
| Swaps | At most n−1 | Can be O(n²) |
| Stable | ❌ No | ✅ Yes |
| Adaptive | ❌ No | ✅ (Optimized) |
| Best Case | O(n²) | O(n) *(Optimized)* |

---

# 💬 Interview Questions

### 1. Why is Bubble Sort called Bubble Sort?

Because after every pass, the **largest element bubbles up to the end** of the array through adjacent swaps.

---

### 2. Why does the inner loop run only until `n - i - 1`?

Because after every pass, the last `i` elements are already sorted and don't need to be compared again.

---

### 3. Why is Bubble Sort stable?

Because it swaps only when the left element is **strictly greater** than the right element, preserving the order of equal elements.

---

### 4. How can Bubble Sort be optimized?

Use a `swapped` flag.

If no swaps occur during a pass, the array is already sorted, so stop the algorithm.

---

### 5. What is the best-case time complexity of the optimized Bubble Sort?

```text
O(n)
```

because only one pass is required when the array is already sorted.

---

# 📖 Summary

- Bubble Sort repeatedly compares adjacent elements.
- Larger elements move toward the end after each pass.
- The sorted part grows from **right to left**.
- Time complexity is generally **O(n²)**.
- Optimized Bubble Sort achieves **O(n)** in the best case.
- It is **stable**, **in-place**, and **adaptive** (optimized version).