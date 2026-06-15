#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    // MAP :
    // Map is a Collection of Key-Value Pairs
    // Name -> Phone Number
    // Rahul -> 9876    ----> a map stores this pairs
    // Aman  -> 9123

    // Maps keep keys sorted.

    // creating a map

    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    map<string, int> mp;

    // Adding Data
    mp["Rahul"] = 95;
    mp["Aman"] = 88;

    // Accessing Data
    cout << mp["Rahul"] << endl;

    // Important Property
    //  ---> Maps keep keys sorted.

    map<int, int> mp1;

    mp1[3] = 30;
    mp1[1] = 10; // this keys will get sorted like 1->10 2->20 3->30
    mp1[2] = 20;

    // Traversing
    //  Each element is actually a pair: ie key -> value

    for (auto i : mp1)
    {
        cout << i.first << " -> " << i.second << endl;
        // here i.first ---> key and i.second ---> value
    }

    auto it = mp1.find(3);
    cout << (*it).second << endl; // value of the key 3

    // auto it = mp1.lower_bound(2);
    // auto it = mp1.upper_bound(3);

    // the rest are same as others such as
    // erase ,swap , size ,empty are same

    // MULTIMAP :
    // A multimap allows
    // Duplicate keys
    // Sorted by key

    multimap<int, string> mmp;

    // insertion
    // For a multimap, we use:
    mmp.insert({101, "Rahul"});
    mmp.insert({101, "Aman"});  // ---->all these values hav the same key
    mmp.insert({101, "Riya"});


    for(auto x : mmp)
{
    cout << x.first
         << " -> "
         << x.second
         << endl;

    // others all same as map


    //UNORDERED MAP
    unordered_map<int,int> ump;
        // same as set and unordered set diff
        //ie
            //Properties:
                // ✅ Key → Value
                // ✅ Unique keys
                // ❌ Not sorted


}
}