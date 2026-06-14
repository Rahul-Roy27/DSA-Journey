#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
    // MULTISET :
    // A multiset is almost the same as a set, except that
    // its sorted and allows diplicate entries

    // creating multiset
    multiset<int> ms;
    ms.insert(10); // {10}
    ms.insert(30); // {10,30}
    ms.insert(10); // {10,10,30} ---> The second 10 is not removed.
    ms.insert(20); // {10,10,20,30} --> still sorted


    // erase (IMPORTANt TRAP ⚠️)
    ms.erase(10) ; // ---> all the occurances of 10s are removed
    
    auto it = ms.find(30); // ---> Returns an iterator to the first occurrence of 10.
    ms.erase(it) ; // ---> Remove only one occurrence.


    // ms.erase(ms.find(20),ms.find(1)+2) ; // --->removes two occurances


    cout << ms.count(10);




    // UNORDERED SET :
        // - Set, but faster and not sorted.
        // duplicates not allowed
        // the rest all same as set

    unordered_set <int> us;

    // all the functions including insert , find etc same as set




}