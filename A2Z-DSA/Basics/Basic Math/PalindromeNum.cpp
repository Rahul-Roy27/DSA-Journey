#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x){
    int n = x ;
    long long revNum = 0;
    if(n < 0) return 0;
    while (n != 0)
    {
        int r = n % 10;
        revNum = revNum*10 + r;
        n /= 10;
    }

    // if(revNum == x){
    //     return true;
    // }else{
    //     return false;
    // }

    return revNum == x ; // ---> shorter way
}

int main(){
    int n;
    cin>>n;
    cout << isPalindrome(n);

    
}