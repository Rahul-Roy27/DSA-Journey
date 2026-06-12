// #include <bits/stdc++.h>
#include <iostream>
#include <deque>
using namespace std;

int main(){

    //Deque :
        // -A deque (stands for double-ended queue) however, is more flexible, as elements can be added and removed from both ends (at the front and the back).
        // -You can also access elements by index numbers umlike lists

    deque <int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(10);
    dq.emplace_front(20);

    for(auto i : dq){
        cout << i << " ";
    }
    cout << endl;
    
    
    dq.pop_back();
    dq.pop_front();
    
    cout << dq.back() << endl ;
    cout << dq.front() << endl ;
    
    for(auto i : dq){
        cout << i << " ";
    }
    cout << endl;


    // rest functions same as vector
    // begin , end , rbegin  , rend ,clear , size , swap



}