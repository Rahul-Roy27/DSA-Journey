#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    //max_element() :
        // - to get the maximum element in the container
        // - returns an iterator to the largest element
        // syntax : max_element(start_iterator, end_iterator);
        // - It returns an iterator, NOT the value
    
    //example :
    vector <int> v1 = {10,30,200,40,0};
    auto it = max_element(v1.begin(),v1.end());
    cout << "maximum element : "<< *it << endl;
    cout << "index of max elmt : " << it - v1.begin() << endl;

    //works with arrays too 
    int arr[] = {5,12,3,20,8};
    auto it2 = max_element(arr, arr+5);
    cout << *it2 << endl;

    //works on range too ie --> auto it = max_element(v.begin()+1, v.end());

        
    // min_element() :
        // find the smallest element in the range
        //returns an iterator to the smallest element
        // syntax :- min_element(start_iterator, end_iterator);

    //example :
    vector <int> v2 = {30,20,10,50,40};
    auto it3 = min_element(v2.begin(), v2.end());
    cout << "min element : " << *it3 << endl;
    cout << "index : " << it3 - v2.begin() << endl;

}