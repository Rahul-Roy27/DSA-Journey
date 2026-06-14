#include <iostream>
#include <queue>
using namespace std;

int main(){
    // QUEUE :
        // - follows FIFO First In First Out , Queue = People in line 🚶🚶🚶
        // - Queue removes from the front.
        // Just like stack, queue hides its internal structure.


    // creating a queue
    queue <int> q1;

    // adding elements
    q1.push(10);    //{10}
    q1.push(20);    // {10,20}
    q1.push(30);    // {10,20,30}

    // front() ---> See who is at the front.    ---> the one that was added first
    cout << q1.front() << endl; // 10

    //back() ---> See who is at the back. ---> the one that was added last
    cout  << q1.back() << endl; // 30

    //pop() ---> Removes the front element.
    q1.pop();
    cout << q1.front(); // 20 bcz 10 was removed


    // size swap empty same as stack



}