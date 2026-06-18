#include <bits/stdc++.h>

using namespace std;

int main()
{
    // find()
    // used to search for an element
    // It returns an iterator.

    // syntax : find(start_iterator, end_iterator, value)

    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto it = find(v1.begin(), v1.end(), 7); // ---> Search from begin() to end() for the value 7. , points to that element.

    // Getting the Value
    cout << "found at index " << *it << endl; // --> Since it is an iterator: we hav to deref it to get the value

    // What if the element isn't found?
    auto it2 = find(v1.begin(), v1.end(), 100); // ---> STL returns v1.end() ie points after last element ...signals as search failed

    // Correct Way to Check
    auto it3 = find(v1.begin(), v1.end(), 40);

    if (it3 != v1.end())
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
    cout << endl;

    // Getting the Index
    vector<int> v2 = {10, 20, 30, 40, 50};
    auto it4 = find(v2.begin(), v2.end(), 30);
    cout << it4 - v2.begin() << endl; // ---> to get the index

    // Complete Example
    vector<int> v3 = {10, 20, 30, 40, 50};
    auto it5 = find(v3.begin(), v3.end(), 40);
    if (it5 != v3.end())
    {
        cout << "Found at index "
             << it5 - v3.begin() << endl;
    }

    // NOTE :
    // This works because vectors have random-access iterators.
    // vector<int>
    // deque<int>
    // array<int,N>
    // But this won't work for : because their iterators aren't based on contiguous memory.
    // list<int>
    // set<int>
    // map<int,int>
    // so for this types we use :  distance(container.begin(), it) ---> distance from start , advance(it,3) ---> move iterator by 3 posn

    // COUNT :
    // returns the the number of occurrences.
    // syntax : count(start_iterator, end_iterator, value)

    // example
    vector<int> v = {1, 2, 3, 2, 4, 2, 5};
    cout << count(v.begin(), v.end(), 2) << endl;

    string s = "bananaaa";
    cout << count(s.begin(), s.end(), 'a') << endl;

    int arr[] = {1, 2, 3, 2, 2};
    cout << count(arr, arr + 5, 2) << endl;
}