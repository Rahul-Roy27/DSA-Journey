#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ; 
    cin >> n;
    int count = 0 ;
    if(n==0){
        count++ ;
    }else if(n<0){
        n = n*(-1);
    }
    while (n>0)
    {
        // cout << n%10 << " " << n/10 << endl;
        n = n/10;
        count++;
    }
    cout << "no of digits : " << count << endl;
    


}