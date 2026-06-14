#include <bits/stdc++.h>
// #include <iostream>
// #include <queue>
// #include <vector>
using namespace std;

int main()
{
    // Priority Queue
    //  - In a priority queue, the largest element gets highest priority by default.
    //  - like a hospital where the most critical patient is priotirised

    // creating priority queue
    priority_queue<int> pq; //  ---> stores max element at the top ---> max heap
                            // ---> Largest element stays at the top.

    // adding elements
    pq.push(10);
    pq.push(30);
    pq.push(20);

    // top() ---> gives the highest priority element.
    cout << pq.top() << endl; // ---> prints the largest element

    // pop() ---> removes the top element
    pq.pop();
    cout << pq.top() << endl; // 20 bcz 30 was popped

    // Minimum Heap ---> 
        // - Smallest first.
        // - Smallest element stays at the top.

    // creating min priority queue or min heap
    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(10);
    pq1.push(50);
    pq1.push(20);

    cout << pq1.top();   // ---> prints the smallest element
}
