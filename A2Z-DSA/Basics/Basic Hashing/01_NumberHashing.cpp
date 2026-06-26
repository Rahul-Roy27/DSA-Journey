#include <bits/stdc++.h>
using namespace std;

int main(){
    // HASHING :
        // - prestoring / precalculation and fetching

    // example : freq count of element 

    //  NUMBER HASHSING ---> using array
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash1[13] = {0};  // ---> precompute ,here assuming max elmnt as 12 so we take 13
                        // ---> the maximum size array that we can delcare is 10^6 inside main for integers
                        // ---> if we declare globally then we can go till 10^7
    for(int i = 0 ; i < n ; i++){
        hash1[arr[i]] += 1 ;
    }

    int queris;
    cout << "Enter no of queires : " ;
    cin >> queris ;

    while(queris--){
        int x;
        cout << "enter element to find its freq : " ;
        cin >> x;
        cout << "Freq = " << hash1[x] << endl;   // ---> fetch , hash[index] = frequency of that index
    }

    // Time Complexity:
    // Pre-computation : O(n)
    // Each Query      : O(1)
    // Total           : O(n + q)

    // Space Complexity:
    // O(maxElement)


    

}