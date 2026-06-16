#include <bits/stdc++.h>
// #include <iostream>
// #include <algorithm>

using namespace std;
int main(){
    //Reverse :
        // reverse() reverses the order of elements in a range.
        // syntax : reverse(start_iterator, end_iterator);

    //Example
    vector <int> v1  = {1,2,3,4,5} ;
    reverse(v1.begin(),v1.end());
    for(auto i : v1){
        cout << i << " " ;
    }cout << endl;


    //Reverse only part of a vector
    vector <int> v2 = {1,2,3,4,5};
    reverse(v2.begin() + 1,v2.begin() + 4);
    for(auto i : v2){
        cout << i << " " ;
    }cout << endl;


    //Works on arrays too
    int arr[] = {10,20,30,40,50};
    reverse(arr,arr+5);
    for(auto i : arr){
        cout << i << " ";
    }cout << endl;
   
    


}
