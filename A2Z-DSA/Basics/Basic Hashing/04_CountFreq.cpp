#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n] ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }

    map <int,int> hash1;
    for(int x : arr){
        hash1[x]++;
    }

    for(auto x : hash1){
        cout << x.first << "->" << x.second << endl;
    }

    
}