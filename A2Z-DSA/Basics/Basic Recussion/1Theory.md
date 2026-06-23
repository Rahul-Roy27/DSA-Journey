# Recursion - Basics

## Definition

Recursion is a programming technique where a function calls itself to solve a smaller version of the same problem.

Instead of using loops, a problem is repeatedly broken down into smaller subproblems until a stopping condition is reached.

---

# Real-Life Analogy

Imagine standing between two mirrors facing each other.

You see:

You → Reflection → Reflection → Reflection → ...

This continues forever unless something stops it.

Recursion works similarly.

A function keeps calling itself until a stopping condition (Base Condition) is reached.

---

# Structure of a Recursive Function

```cpp
returnType functionName(parameters){

    // Base Condition
    if(condition){
        return;
    }

    // Work

    // Recursive Call
    functionName(smaller_problem);
}
```

Every recursive function contains:

1. Base Condition
2. Recursive Call

---

# Base Condition

## Definition

The condition that stops further recursive calls.

Without a base condition, recursion continues forever and causes Stack Overflow.

### Example

```cpp
void fun(int count){
    if(count == 5){
        return;
    }

    cout << count << " ";
    fun(count + 1);
}
```

### Output

```text
0 1 2 3 4
```

When count becomes 5:

```cpp
if(count == 5)
```

becomes true and recursion stops.

---

# Recursive Call

## Definition

A function calling itself with a smaller or simpler input.

### Example

```cpp
fun(count + 1);
```

Each call moves closer to the base condition.

---

# Why Recursion Works

A recursive function solves:

1. A small part of the problem
2. Delegates the remaining work to itself

Example:

```cpp
factorial(5)
```

can be written as:

```cpp
5 * factorial(4)
```

The same function solves a smaller problem.

---

# Function Call Stack

Every recursive call is stored in memory inside the Call Stack.

Example:

```cpp
factorial(3)
```

Calls:

```text
factorial(3)
    factorial(2)
        factorial(1)
```

Memory Stack:

```text
Top
-----
factorial(1)
factorial(2)
factorial(3)
-----
Bottom
```

After reaching the base condition, functions return one by one.

---

# Example 1: Print Name N Times

## Problem

Print a name N times using recursion.

### Example

```text
Input:
N = 3

Output:
Roy
Roy
Roy
```

### Code

```cpp
#include <bits/stdc++.h>
using namespace std;

void printName(int count, int n){

    if(count == n){
        return;
    }

    cout << "Roy" << endl;

    printName(count + 1, n);
}

int main(){

    int n = 3;

    printName(0, n);
}
```

---

## Dry Run

```cpp
printName(0,3)
```

Call Sequence:

```text
printName(0,3)
Print Roy

printName(1,3)
Print Roy

printName(2,3)
Print Roy

printName(3,3)
Return
```

Output:

```text
Roy
Roy
Roy
```

---

# Important Terms

## Recursive Tree

Visual representation of recursive calls.

Example:

```text
fun(0)
|
fun(1)
|
fun(2)
|
fun(3)
|
return
```

---

## Stack Overflow

Occurs when recursion never stops.

Example:

```cpp
void fun(){
    fun();
}
```

No base condition exists.

Result:

```text
Stack Overflow
```

Program crashes.

---

# Time Complexity

For:

```cpp
printName(0,n)
```

Function executes N times.

Time Complexity:

```text
O(N)
```

---

# Space Complexity

Due to recursive function calls stored in stack memory:

```text
O(N)
```

---

# Key Points to Remember

1. Recursion = Function calling itself.

2. Every recursive function must have a Base Condition.

3. Recursive call should move closer to the Base Condition.

4. Always dry run recursive functions.

5. Think:

   * When should recursion stop?
   * What smaller problem am I solving?

6. Most recursion problems follow:

```cpp
if(base_condition){
    return;
}

recursiveCall(smaller_problem);
```

---

# Recursion Learning Order (Striver A2Z)

1. Print Name N Times
2. Print 1 to N
3. Print N to 1
4. Sum of First N Numbers
5. Factorial
6. Reverse Array
7. Palindrome Check
8. Fibonacci

```
```
## Key Learnings:
- Recursion = Function calls itself
- Base Condition stops recursion
- Recursive call moves toward base condition
- Work before recursive call = executes while going down
- Work after recursive call = executes while returning (LIFO)
