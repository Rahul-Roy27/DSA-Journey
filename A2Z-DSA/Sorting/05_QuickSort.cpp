#include <iostream>
#include <vector>
using namespace std;

int partnIndex(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j) {
        while(i <= high && arr[i] <= pivot) {
            i++;
        }

        while(j >= low && arr[j] > pivot) {
            j--;
        }

        if(i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

void QuickSort(vector<int>& arr, int low, int high) {
    if(low < high) {
        int pIndex = partnIndex(arr, low, high);

        QuickSort(arr, low, pIndex - 1);
        QuickSort(arr, pIndex + 1, high);
    }
}

int main() {
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};

    QuickSort(arr, 0, arr.size() - 1);

    for(int x : arr) {
        cout << x << " ";
    }
}