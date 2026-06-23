
// reverse array noramal way

// #include  <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {3,4,5,2,1};
//     int left = 0 , right = 4;
//     while(left < right){
//         int temp = arr[right];
//         arr[right] = arr[left];
//         arr[left] = temp;

//         // swap(arr[left],arr[right]); //-- using swap func

//         left++ ;
//         right--;

//     }
//     for(auto x : arr){
//         cout << x << " ";
//     }

// }


// reverse array using recursion
#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[] , int left , int right){
    if(left>=right){
        return;
    }
    swap(arr[left],arr[right]);
    reverseArr(arr,left+1,right-1);
}
int main(){
    int arr1[] = {1,2,3,4,5};
    int l = 0 ; 
    int r = ( sizeof(arr1)/sizeof(arr1[0])) - 1;
    reverseArr(arr1,l,r);
    for(auto x : arr1){
        cout << x << " ";
    }
}