# Quick Sort

## 1. Introduction

Quick Sort is a **Divide and Conquer** sorting algorithm that sorts an array by selecting a pivot element and partitioning the array around it.

During partitioning:
- Elements smaller than or equal to the pivot are placed on its left.
- Elements greater than the pivot are placed on its right.
- The pivot is placed in its correct sorted position.

The left and right portions are then sorted recursively.

---

## 2. Working of Quick Sort

1. Choose a pivot element (in this implementation, the first element).
2. Partition the array around the pivot.
3. Place the pivot in its correct position.
4. Recursively sort the left portion.
5. Recursively sort the right portion.
6. Stop when `low >= high`.

---

## 3. Partitioning

Partitioning is the most important operation in Quick Sort.

### Variables

- `pivot`: The element selected for partitioning.
- `i`: Moves from the left to find an element greater than the pivot.
- `j`: Moves from the right to find an element less than or equal to the pivot.

### Partition logic

1. Select `arr[low]` as the pivot.
2. Move `i` right until an element greater than the pivot is found.
3. Move `j` left until an element less than or equal to the pivot is found.
4. If `i < j`, swap `arr[i]` and `arr[j]`.
5. Repeat until `i` and `j` cross.
6. Swap the pivot with `arr[j]`.
7. Return `j`, the pivot's final position.

---

## 4. Algorithm / Pseudocode

### Partition

```text
pivot = arr[low]
i = low
j = high

while i < j:

    while i <= high AND arr[i] <= pivot:
        i++

    while j >= low AND arr[j] > pivot:
        j--

    if i < j:
        swap arr[i], arr[j]

swap arr[low], arr[j]

return j
```

### Quick Sort

```text
QuickSort(arr, low, high):

    if low < high:

        pIndex = Partition(arr, low, high)

        QuickSort(arr, low, pIndex - 1)
        QuickSort(arr, pIndex + 1, high)
```

---

## 5. C++ Implementation

```cpp
class Solution {
public:
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[low];
        int i = low;
        int j = high;

        while(i < j) {
            while(i <= high && arr[i] <= pivot) {
                i++;
            }

            while(j >= low && arr[j] > pivot) {
                j--;
            }

            if(i < j) {
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[low], arr[j]);
        return j;
    }

    void quickSort(vector<int>& arr, int low, int high) {
        if(low < high) {
            int pIndex = partition(arr, low, high);

            quickSort(arr, low, pIndex - 1);
            quickSort(arr, pIndex + 1, high);
        }
    }
};
```

---

## 6. Time Complexity

| Case | Complexity |
|---|---|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n²) |

### Best and Average Case

When partitioning divides the array into reasonably balanced portions, Quick Sort performs approximately `O(n log n)` operations.

### Worst Case

When partitions become extremely unbalanced, such as repeatedly having one empty portion and one portion containing almost all the elements, the complexity becomes `O(n²)`.

---

## 7. Space Complexity

- Average recursion stack: `O(log n)`
- Worst recursion stack: `O(n)`

Quick Sort is generally considered an in-place sorting algorithm because it doesn't require a separate auxiliary array for merging.

---

## 8. Quick Sort vs Merge Sort

| Quick Sort | Merge Sort |
|---|---|
| Uses partitioning | Uses merging |
| Places pivot in correct position | Divides into halves and merges |
| Generally in-place | Requires extra array space for arrays |
| Average: O(n log n) | O(n log n) |
| Worst: O(n²) | O(n log n) |
| Average auxiliary space: O(log n) | Auxiliary space: O(n) for arrays |

---

## 9. Advantages

- Generally fast in practice.
- In-place partitioning.
- Good cache locality.
- Average time complexity is `O(n log n)`.

## 10. Disadvantages

- Worst-case time complexity is `O(n²)`.
- Recursive calls consume stack space.
- Performance depends on pivot selection.

---

## Key Concept

**Quick Sort selects a pivot, partitions the array so the pivot reaches its correct position, and recursively sorts the portions on both sides.**
