#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
int main()
{

    // sort() ---> sorts the data
    // syntax : sort(start_iterator , end_iterator);
    // default sort order : ascending
    // time complexity O(n log n)

    // example:
    vector<int> v1 = {3, 4, 2, 5, 1};

    sort(v1.begin(), v1.end()); // --> Sort everything from the first element up to (but not including) end().

    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

    // Sorting Arrays
    int arr[] = {4, 5, 2, 1, 3};
    sort(arr, arr + 5); // here arr points to first element and arr+5 points after the last element

    // Descending Order
    //  sort(start, end , greater<int>());

    vector<int> v2 = {8, 3, 2, 5, 6, 1};
    sort(v2.begin(), v2.end(), greater<int>());
    for (auto i : v2)
    {
        cout << i << " ";
    }
    cout << endl;

    // Sorting a Part of a Vector
    vector<int> v3 = {5, 2, 8, 1, 3};
    sort(v3.begin() + 1, v3.begin() + 4);
    for (auto i : v3)
    {
        cout << i << " ";
    }
    cout << endl;

    // Sorting Pairs

    vector<pair<int, int>> vp = {
        {2, 10},
        {1, 20},
        {3, 15}};
    sort(vp.begin(), vp.end()); // --> sorts by .first , if .first is equal then by .second
    for (auto i : vp)
    {
        cout << i.first << " " << i.second << endl;
    }

    // custom sort (later)
    // bool cmp(pair<int, int> a,
    //          pair<int, int> b)
    // {
    //     return a.second < b.second;
    // }
    // sort(v.begin(), v.end(), cmp);
}