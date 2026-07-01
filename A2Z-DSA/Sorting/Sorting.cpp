#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// SELECTION SORT : --> select the minimum element and swap
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i; // --> assuming 1st element as minmum
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex]) // --> check the rest if they are smaller then minmum
            {
                minIndex = j; // --> if min found update it
            }
        }
        // swap the element minindex and current index
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// BUBBLE SORT : --> Compare every pair of adjacent elements and swap.
void bubble_sort(int arr[] ,int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]> arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    
}

// INSERTION SORT : --> Take one element and insert it into its correct position.
void insertion_sort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];   // --> store current elmnt
        int j = i - 1; // ---> compare with the previous element
        while (j>=0 && arr[j]>key)  
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }   
}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // selection_sort(arr,n);
    // bubble_sort(arr,n);
    insertion_sort(arr,n);

    
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
}