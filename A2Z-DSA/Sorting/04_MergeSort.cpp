#include <bits/stdc++.h>
using namespace std;

// Merge two sorted halves
// Left  -> arr[low...mid]
// Right -> arr[mid+1...high]
void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;      // Temporary array

    int left = low;        // Pointer for left half
    int right = mid + 1;   // Pointer for right half

    // Compare elements from both halves
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements from left half
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements from right half
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy merged elements back into the original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

// Merge Sort (Divide Function)
void mergeSort(int arr[], int low, int high)
{
    // Base case
    if (low >= high)
        return;

    // Find the middle
    int mid = (low + high) / 2;

    // Divide the left half
    mergeSort(arr, low, mid);

    // Divide the right half
    mergeSort(arr, mid + 1, high);

    // Merge the two sorted halves
    merge(arr, low, mid, high);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Call Merge Sort
    mergeSort(arr, 0, n - 1);

    // Output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}