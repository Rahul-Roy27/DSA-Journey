#include <bits/stdc++.h>    // ---> includes all library at once
using namespace std;
int main(){
    //pair --> stores 2 values together
    // --> under utility library

    pair <int,int> p = {1,3};
    cout << p.first << " " << p.second << endl;

    pair <int,pair <int,int> > p2 = {3,{10,20}};
    cout << p2.first << " " << p2.second.second << endl;

    pair <int,int> arr[] = {{10,20},{2,5}};
    cout << arr[1].second << endl;
    
}