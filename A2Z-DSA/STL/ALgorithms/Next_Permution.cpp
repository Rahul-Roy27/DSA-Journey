#include <bits/stdc++.h>
#include <algorithm>


using namespace std;

int main(){
    //Suppose:
        // 1 2 3
    // How many arrangements are possible?
        // 1 2 3
        // 1 3 2
        // 2 1 3
        // 2 3 1
        // 3 1 2
        // 3 2 1
    // Each arrangement is called a permutation.

    // next_permutation() :
        // - It converts the current arrangement into the next larger permutation.
        // syntax : next_permutation(v.begin(), v.end());
        // - it returns bool true if the next permutation exists else false
        // - It automatically resets to the first permutation.

    // example - 
    vector <int> v1 = {1,2,3};
    bool ans = next_permutation(v1.begin(),v1.end());
    cout << ans << endl;

    // priting all the permutations 
    do
    {
        for(auto i : v1){
            cout << i << " " ; 
        }
        cout << endl;
    } while (next_permutation(v1.begin(),v1.end()));
    
}