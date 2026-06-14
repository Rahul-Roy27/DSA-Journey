#include <iostream>
#include <set>

using namespace std;

int main()
{
    // SET :
    // - Unique elements only
    // - Automatically keeps them sorted
    // - eg track of roll numbers

    // Note : internally a tree is maintained

    // creating set
    set<int> s;

    s.insert(3); // {3}
    s.insert(1); // {1,3}
    s.insert(2); // {1,2,3}
    s.insert(4); // {1,2,3,4}
    s.insert(2); // {1,2,3,4}   ---> ie no duplicates

    // Functionality of insert in vector can be used to increase efficiency

    // begin() , end() , rbegin() , rend() , size()
    // empty() and swap() are same as vector

    // Unlike stack and queue, sets have iterators.
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // Some impt functionalities

    auto it = s.find(3); // ---> find() returns a iterator
    cout << *it << endl;

    if (it != s.end())  // if an element is not in the set then it returns end()
    {
        cout << "Found" << endl;
    }

    // erase() ---> Remove an element.
    s.erase(2);
    for(auto i : s){cout << i << " ";}
    cout << endl;

    // count() ---> returns no of occurances ie either 1 or 0
    cout << s.count(4) << endl;
    cout << s.count(2) << endl;



    // upper and lower bound 
        // lower_bound = >= x
        // upper_bound = > x

    // auto it = s.lower_bound(2);
    // auto it = s.upper_bound(4);


}