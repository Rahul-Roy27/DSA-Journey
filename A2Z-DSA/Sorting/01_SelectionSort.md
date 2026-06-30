# Selection Sort

## 📌 Definition

**Selection Sort** is a simple comparison-based sorting algorithm that repeatedly **selects the smallest element from the unsorted part of the array** and places it at its correct position.

---

# 💡 Intuition

Imagine the array is divided into two parts:

```text
Sorted Part | Unsorted Part
```

Initially:

```text
[] | 7 4 5 2 9
```

Find the smallest element from the unsorted part and swap it with the first element.

```text
2 | 4 5 7 9
```

Repeat the same process for the remaining unsorted elements until the entire array is sorted.

---

# 📝 Algorithm

For each position `i`:

1. Assume the current element is the smallest.
2. Traverse the remaining unsorted part of the array.
3. Find the actual smallest element.
4. Swap it with the element at index `i`.
5. Move to the next position.

---

# 🔍 Dry Run

### Input

```text
64 25 12 22 11
```

### Pass 1

Find the minimum from the entire array.

```text
64 25 12 22 11
             ↑
```

Minimum = **11**

Swap with first element.

```text
11 25 12 22 64
```

---

### Pass 2

Ignore the first element.

```text
11 | 25 12 22 64
```

Minimum = **12**

Swap.

```text
11 12 25 22 64
```

---

### Pass 3

Ignore first two elements.

```text
11 12 | 25 22 64
```

Minimum = **22**

Swap.

```text
11 12 22 25 64
```

---

### Pass 4

Remaining elements:

```text
25 64
```

Already sorted.

### Final Output

```text
11 12 22 25 64
```

---

# 🧠 Visual Representation

```text
Initial

[] | 64 25 12 22 11

↓

[11] | 25 12 22 64

↓

[11 12] | 25 22 64

↓

[11 12 22] | 25 64

↓

[11 12 22 25] | 64

↓

[11 12 22 25 64]
```

---

# 💻 C++ Implementation

```cpp
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    // Traverse through each position
    for (int i = 0; i < n - 1; i++)
    {
        // Assume current element is the minimum
        int minIndex = i;

        // Find the smallest element in the remaining array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Place the smallest element at its correct position
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
```

---

# ⏱ Time Complexity

| Case | Complexity |
|------|------------|
| Best Case | **O(n²)** |
| Average Case | **O(n²)** |
| Worst Case | **O(n²)** |

### Why is the Best Case still O(n²)?

Even if the array is already sorted, Selection Sort still scans the remaining unsorted portion to find the minimum during every pass.

It performs the same number of comparisons regardless of the input order.

---

# 💾 Space Complexity

```text
O(1)
```

No extra array is used.

---

# 🔄 Number of Comparisons

For an array of size **n**:

```text
(n - 1) + (n - 2) + ... + 2 + 1

= n(n - 1) / 2
```

Hence,

```text
Comparisons = O(n²)
```

---

# 🔁 Number of Swaps

Maximum swaps:

```text
n - 1
```

Only one swap is performed in each pass.

This is one of the advantages of Selection Sort.

---

# 📌 Properties

| Property | Value |
|----------|-------|
| Sorting Type | Comparison Sort |
| In-place | ✅ Yes |
| Stable | ❌ No |
| Adaptive | ❌ No |
| Recursive | ❌ No |

---

# 🤔 Why is Selection Sort NOT Stable?

Consider the array:

```text
4a 4b 2
```

After the first swap:

```text
2 4b 4a
```

The relative order of `4a` and `4b` changes.

Hence,

**Selection Sort is NOT stable.**

---

# 📚 Advantages

- Very easy to understand and implement.
- Requires only **O(1)** extra space.
- Performs only **n − 1** swaps.
- Suitable for very small datasets.

---

# ❌ Disadvantages

- Time complexity is always **O(n²)**.
- Not suitable for large datasets.
- Not stable.
- Not adaptive (doesn't benefit from an already sorted array).

---

# 🎯 When Should You Use Selection Sort?

Selection Sort is mainly used for:

- Learning sorting algorithms.
- Very small arrays.
- Situations where minimizing the number of swaps is important.

It is **rarely used in real-world applications** because more efficient algorithms like Merge Sort, Quick Sort, and Heap Sort are much faster.

---

# 🧠 Key Points to Remember

- Find the minimum element from the unsorted part.
- Swap it with the first unsorted element.
- The sorted part grows from left to right.
- Performs exactly **n − 1** passes.
- Maximum swaps = **n − 1**.
- Comparisons are always **O(n²)**.
- Space complexity = **O(1)**.
- In-place sorting algorithm.
- Not stable.
- Not adaptive.

---

# 📊 Complexity Summary

| Feature | Value |
|---------|-------|
| Best Time | O(n²) |
| Average Time | O(n²) |
| Worst Time | O(n²) |
| Space | O(1) |
| Stable | ❌ |
| In-place | ✅ |
| Adaptive | ❌ |

---

# 💬 Interview Questions

### 1. Why is Selection Sort called "Selection" Sort?

Because in every pass, it **selects the smallest element** from the unsorted part and places it at its correct position.

---

### 2. Why is the best-case time complexity O(n²)?

Because the algorithm still searches the entire unsorted part to find the minimum element, even if the array is already sorted.

---

### 3. Why is Selection Sort not stable?

Swapping the minimum element with the current element can change the relative order of equal elements.

---

### 4. What is the biggest advantage of Selection Sort?

It performs **only one swap per pass**, resulting in at most **n − 1 swaps**.

---

# 📖 Summary

- Selection Sort repeatedly selects the **minimum element** from the unsorted part.
- After every pass, one element reaches its correct position.
- Time complexity is always **O(n²)**.
- Space complexity is **O(1)**.
- It is **in-place** but **not stable**.
- Mainly used for learning and very small datasets.