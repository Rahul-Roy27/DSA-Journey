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

void bubble_sort(int arr[],int n){

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

    selection_sort(arr,n);

    
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
}