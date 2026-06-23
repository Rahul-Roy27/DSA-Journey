#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int n ,int i){
    if(s[i] != s[n-i-1]) return false;
    return isPalindrome(s,n-i-1,i+1);
}

bool isPalindrome2(string s, int left , int right){
    if(left>=right) return true;
    if(s[left]!=s[right]){
        return false;
    }
    return isPalindrome2(s,left+1,right-1);
}

int main(){
    string s = "madam";
    int n = s.length();
    cout << n << endl;
    
    cout << isPalindrome2(s,0,n-1);
}