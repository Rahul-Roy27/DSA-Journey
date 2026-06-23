#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}

int fact2(int n , int result){
    if(n==0 || n==1) return result;
    return fact2(n-1,result*n);
}

int main(){
    cout << fact(5);
    cout << endl;
    cout << fact2(5,1);
}