#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    //precompute
    map <int,int> mp;   // ---> map <key,value> mapName
                        // key = array element
                        // value = frequency
                        // mp[x] automatically creates key 'x' with value 0 if it doesn't exist,
                        // then ++ increments its frequency.
    // unordered_map <int,int> mp; ----> unordered_map is preferred in most cases due to its O(1) average time complexity for insertion, search, and deletion.
    for(int i = 0 ; i < n ; i++){
        mp[arr[i]]++;
    }
    for(auto it : mp){
        cout << it.first << " -> " << it.second << endl; 
    }
    

    cout << "Enter no of query : ";
    int q;
    cin >> q;
    while (q--)
    {
        cout << "enter elmt : ";
        int x; 
        cin >> x;
        //fetch
        cout << "freq : " << mp[x] << endl; // --> // NOTE: mp[x] creates key x with value 0 if it doesn't already exist.
    }

        // Time Complexity
    // Precomputation : O(n log n)
    // Each Query     : O(log n)

    // Space : O(n)
    
    
}