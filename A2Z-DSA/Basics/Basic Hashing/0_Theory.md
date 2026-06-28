# 📘 Hashing

> **Topic:** Hashing
> **Course:** Striver A2Z DSA Sheet
> **Language:** C++

---

# Table of Contents

1. Introduction
2. What is Hashing?
3. Why Do We Need Hashing?
4. Key-Value Pair
5. Frequency Counting
6. Integer Hashing
7. Character Hashing
8. ASCII Mapping
9. Hashing using STL (`map` & `unordered_map`)
10. Time & Space Complexity
11. Common Mistakes
12. Interview Tips
13. Practice Problems
14. Summary
15. Cheat Sheet

---

# 1. Introduction

Hashing is one of the most important topics in Data Structures and Algorithms.

It allows us to **store and retrieve information efficiently**, making many problems much faster than brute force solutions.

Hashing is used in:

* Arrays
* Strings
* Sliding Window
* Prefix Sum
* Trees
* Graphs
* Dynamic Programming

> 💡 **Remember:** Whenever you hear words like **frequency**, **duplicates**, or **count occurrences**, think about **Hashing**.

---

# 2. What is Hashing?

## Definition

**Hashing is a technique used to store data in the form of Key-Value pairs so that searching, insertion, and deletion can be performed efficiently.**

---

## Simple Meaning

Think of hashing as creating a shortcut.

Instead of searching every element one by one, we directly jump to the required data.

### Without Hashing

```
Find frequency of 5

↓

Check every element

↓

Time = O(n)
```

### With Hashing

```
Frequency of 5

↓

hash[5]

↓

Answer found instantly

Time = O(1) (Average)
```

---

# 3. Why Do We Need Hashing?

Suppose we have the following array:

```cpp
arr = {1, 2, 1, 3, 2, 1};
```

### Problem

Find the frequency of every element.

---

## Brute Force

For every unique element, traverse the entire array again.

```
1 → Scan array

2 → Scan array

3 → Scan array
```

### Time Complexity

```
O(n²)
```

---

## Using Hashing

Traverse the array only once.

```
1 → 3

2 → 2

3 → 1
```

### Time Complexity

```
O(n)
```

Much faster!

---

# 4. Key-Value Pair

Hashing stores information in the following format:

```
Key → Value
```

Examples:

```
Student Name → Marks

Roll Number → Student

Character → Frequency

Number → Frequency
```

Example:

```
5 → 3
```

means

```
Number 5 appears 3 times.
```

---

# 5. Frequency Counting

Frequency means:

> **The number of times an element appears in a collection.**

Example:

```cpp
arr = {4, 2, 4, 5, 2, 4};
```

Frequency Table

| Element | Frequency |
| ------: | :-------: |
|       2 |     2     |
|       4 |     3     |
|       5 |     1     |

Hashing is most commonly used for frequency counting.

---

# 6. Integer Hashing

## When to Use?

Use Integer Hashing when:

* Numbers are **small**
* Numbers are **non-negative**
* Maximum value is known

---

### Example

```cpp
arr = {1, 2, 1, 3, 2, 1};
```

Maximum value = 3

Create a frequency array.

```cpp
int hash[4] = {0};
```

Why 4?

Because indices go from **0 to 3**.

---

### Algorithm

1. Create a frequency array.
2. Initialize all values to 0.
3. Traverse the array.
4. Increment the frequency.

---

### Code

```cpp
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 1, 3, 2, 1};
    int n = 6;

    int hash[4] = {0};

    for(int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    cout << "Frequency of 1 = " << hash[1] << endl;
    cout << "Frequency of 2 = " << hash[2] << endl;
    cout << "Frequency of 3 = " << hash[3] << endl;

    return 0;
}
```

### Output

```
Frequency of 1 = 3

Frequency of 2 = 2

Frequency of 3 = 1
```

---

# 7. Character Hashing

Character hashing stores the frequency of characters instead of numbers.

Example:

```cpp
string s = "abacbc";
```

---

## Lowercase Characters

Since lowercase letters range from **a to z**, we need an array of size **26**.

```cpp
int hash[26] = {0};
```

Update frequency.

```cpp
for(char ch : s)
{
    hash[ch - 'a']++;
}
```

---

### Why `ch - 'a'`?

ASCII values:

```
'a' = 97

'b' = 98

'c' = 99
```

Therefore,

```
'a' - 'a' = 0

'b' - 'a' = 1

'c' - 'a' = 2
```

This converts characters into array indices.

---

### Code

```cpp
#include <iostream>
using namespace std;

int main()
{
    string s = "abacbc";

    int hash[26] = {0};

    for(char ch : s)
    {
        hash[ch - 'a']++;
    }

    cout << hash['a' - 'a'] << endl;
    cout << hash['b' - 'a'] << endl;
    cout << hash['c' - 'a'] << endl;

    return 0;
}
```

Output

```
2

2

2
```

---

# 8. ASCII Mapping

If uppercase letters, digits, or symbols are also present, use an array of size **256**.

```cpp
int hash[256] = {0};

for(char ch : s)
{
    hash[ch]++;
}
```

This works because every character has an ASCII value between **0 and 255**.

---

# 9. Hashing using STL

Sometimes array hashing is not possible.

Example:

```cpp
arr = {1000000000, -5, 500000}
```

Creating

```cpp
int hash[1000000001];
```

is impossible.

---

Use **unordered_map** instead.

```cpp
unordered_map<int, int> freq;

for(int x : arr)
{
    freq[x]++;
}
```

Now it works for:

* Large numbers
* Negative numbers
* Sparse values

---

## `unordered_map`

### Advantages

* O(1) Average Search
* O(1) Average Insert
* O(1) Average Delete

Keys are **not sorted**.

---

## `map`

Stores keys in sorted order.

Operations take

```
O(log n)
```

---

## Comparison

| Feature            | map           | unordered_map |
| ------------------ | ------------- | ------------- |
| Internal Structure | Balanced Tree | Hash Table    |
| Sorted Keys        | ✅ Yes         | ❌ No          |
| Search             | O(log n)      | O(1) Average  |
| Insert             | O(log n)      | O(1) Average  |
| Delete             | O(log n)      | O(1) Average  |

---

# 10. Time & Space Complexity

## Integer Hashing

| Operation | Complexity   |
| --------- | ------------ |
| Insert    | O(1)         |
| Search    | O(1)         |
| Space     | O(Max Value) |

---

## unordered_map

| Operation | Complexity   |
| --------- | ------------ |
| Insert    | O(1) Average |
| Search    | O(1) Average |
| Delete    | O(1) Average |

Worst Case

```
O(n)
```

(because of collisions)

---

# 11. Common Mistakes

❌ Forgetting to initialize the hash array with 0.

❌ Using

```cpp
hash[ch]
```

instead of

```cpp
hash[ch - 'a']
```

for lowercase letters.

❌ Creating huge arrays.

```cpp
int hash[1000000000];
```

❌ Using array hashing for negative numbers.

❌ Assuming `unordered_map` keeps elements sorted.

---

# 12. Interview Tips

Whenever the problem mentions:

* Frequency
* Count occurrences
* Duplicate elements
* Most frequent element
* Least frequent element
* First non-repeating element
* First repeating element

👉 Your first thought should be:

> **Can I solve this using Hashing?**

---

# 13. Practice Problems

## Easy

* Count frequency of elements
* Count frequency of characters
* Highest frequency element
* Lowest frequency element

---

## Medium

* Two Sum
* Valid Anagram
* First Unique Character
* Majority Element

---

## Advanced

* Longest Consecutive Sequence
* Subarray Sum Equals K
* Longest Subarray with Sum K
* Group Anagrams

---

# 14. Summary

* Hashing stores data in **Key → Value** format.
* It is mainly used for **fast searching** and **frequency counting**.
* Array Hashing is suitable for **small non-negative values**.
* Character Hashing uses ASCII values.
* `unordered_map` is generally preferred for large or unknown values.
* `map` should be used when sorted keys are required.

---

# 15. Quick Revision Cheat Sheet

```cpp
// Integer Hashing
int hash[100] = {0};
hash[x]++;

// Character Hashing
int hash[26] = {0};
hash[ch - 'a']++;

// ASCII Hashing
int hash[256] = {0};
hash[ch]++;

// unordered_map
unordered_map<int, int> freq;
freq[x]++;

// map
map<int, int> freq;
freq[x]++;
```

---

# Key Takeaways

* ✅ Think **Hashing** whenever you see **frequency**.
* ✅ Array Hashing → Small positive numbers.
* ✅ Character Hashing → `ch - 'a'`.
* ✅ `unordered_map` → Fastest for most problems.
* ✅ `map` → Sorted keys.

> **Next Topic:** Hashing Problems & Frequency-Based Questions (Striver A2Z)

# 📘 Division Hashing (Hash Function)

> **Topic:** Hashing Fundamentals (Striver A2Z DSA)

---

# What is Division Hashing?

Division Hashing is a technique used to **map a key (element)** to an **index (bucket)** in a hash table.

Instead of storing an element directly at its value as an index (like array hashing), we first compute a **hash value** using a **hash function**.

The most common hash function is:

```cpp
index = key % tableSize;
```

This is known as the **Division Method**.

---

# Why do we need it?

Suppose we want to store the number:

```text
1000000000
```

Creating an array of size `1000000001` is impossible.

Instead, we calculate a much smaller index using a hash function.

---

# Example

Suppose the hash table size is **10**.

```cpp
index = key % 10;
```

### Insert 57

```cpp
57 % 10 = 7
```

Store it in **Bucket 7**.

---

### Insert 24

```cpp
24 % 10 = 4
```

Store it in **Bucket 4**.

---

### Insert 31

```cpp
31 % 10 = 1
```

Store it in **Bucket 1**.

---

Current hash table:

```text
Bucket 1 → 31
Bucket 4 → 24
Bucket 7 → 57
```

---

# Why do we use the Modulo (`%`) operator?

The modulo operator always returns a value between

```text
0
```

and

```text
tableSize - 1
```

For example:

```cpp
11 % 10 = 1
25 % 10 = 5
87 % 10 = 7
999 % 10 = 9
```

Hence, it always produces a valid bucket index.

---

# Collision

## Definition

A **collision** occurs when **two or more different keys generate the same hash index**.

Example:

```cpp
17 % 10 = 7
27 % 10 = 7
37 % 10 = 7
```

All three keys map to **Bucket 7**.

This is called a **collision**.

---

# Collision Handling (Chaining)

The most common collision handling technique is **Chaining**.

Instead of storing only one element in a bucket, every bucket stores a **linked list** (or another container).

Example:

```text
Bucket 7

↓

17 → 27 → 37
```

If we want to search for `27`:

1. Go to Bucket 7.
2. Traverse the chain.
3. Find 27.

---

# Why is `unordered_map` O(1) on Average?

Normally, each key is distributed uniformly among different buckets.

Example:

```text
Bucket 1 → 31
Bucket 4 → 24
Bucket 7 → 57
```

Searching requires visiting only one bucket.

Therefore,

```text
Average Time Complexity = O(1)
```

---

# Why is `unordered_map` O(n) in the Worst Case?

Suppose every key hashes to the same bucket.

```text
Bucket 7

↓

5

↓

17

↓

24

↓

81

↓

99

↓

...
```

Searching for the last element requires traversing the entire chain.

Therefore,

```text
Worst Case Time Complexity = O(n)
```

---

# Why are Prime Numbers Preferred?

Instead of choosing table sizes like

```text
10
100
1000
```

we often choose **prime numbers** such as:

```text
13
31
101
1009
```

Prime table sizes generally distribute keys more uniformly, reducing the chances of collisions.

---

# Time Complexity

| Operation | Average | Worst |
| --------- | :-----: | :---: |
| Insert    |   O(1)  |  O(n) |
| Search    |   O(1)  |  O(n) |
| Delete    |   O(1)  |  O(n) |

---

# Important Terms

## Hash Function

A function that converts a key into a bucket index.

Example:

```cpp
index = key % tableSize;
```

---

## Bucket

A location in the hash table where elements are stored.

---

## Collision

When two or more different keys map to the same bucket.

Example:

```cpp
17 % 10 = 7
27 % 10 = 7
```

---

## Chaining

A collision handling technique where multiple elements are stored in the same bucket using a linked list (or similar container).

---

# Interview Questions

## Why is `unordered_map` faster than `map`?

* `unordered_map` uses a **Hash Table**.
* Average operations are **O(1)**.
* `map` uses a **Red-Black Tree (Balanced BST)**.
* Operations are **O(log n)**.

---

## Why can `unordered_map` become O(n)?

Because of **hash collisions**.

If many keys are stored in the same bucket, searching may require traversing the entire chain.

---

# Things to Remember ⭐

* Division Method:

  ```cpp
  index = key % tableSize;
  ```

* Different keys can produce the same index.

* This is called a **Collision**.

* Chaining is the most common collision handling technique.

* `unordered_map` uses a **Hash Table** internally.

* Average complexity is **O(1)**.

* Worst-case complexity is **O(n)** due to collisions.

* Prime table sizes generally reduce collisions.

---

# Quick Revision

```text
Large Key
     │
     ▼
Hash Function
(key % tableSize)
     │
     ▼
Bucket Index
     │
     ▼
Store Element

If multiple keys map to the same bucket
            │
            ▼
        Collision
            │
            ▼
     Handle using Chaining
```

---

# Summary

* Division Hashing maps a large key to a small bucket index using the modulo operator.
* The hash function helps store and retrieve data efficiently.
* Different keys may produce the same bucket index, resulting in collisions.
* Chaining is used to handle collisions.
* `unordered_map` provides **O(1)** average performance because of hashing, but due to collisions, the worst-case complexity can become **O(n)**.
