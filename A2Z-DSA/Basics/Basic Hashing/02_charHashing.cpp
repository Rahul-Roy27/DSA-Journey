#include <bits/stdc++.h>
using namespace std;
int main(){
    // CHAR Hashing ---> using arra y
    string s;
    cin >> s;

    //precompute
    int hash1[26] = {0}; // --> If uppercase letters, digits, or symbols are also present, use an array of size 256.
    for(char ch : s){
        hash1[ch - 'a']++ ; // --> This converts characters into array indices. ie a - a = 0 , b - a = 1 ...
    }

    int q;
    cout << "Enter no of queries : ";
    cin >> q;
    while (q--)
    {
        char c ;
        cout << "Enter char : " ;
        cin >> c;

        //fetch
        cout << "Freq : " << hash1[c -'a'] << endl;
    }
    
    // Precomputation : O(n)

    // Each Query : O(1)

    // Total : O(n + q)
    
}