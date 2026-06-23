#include <bits/stdc++.h>
using namespace std;

void printName(string name , int n ,int count){
    if(count == n ){
        return;
    }
    cout << name << endl;
    printName(name,n,count+1);
}


int main(){
    printName("Roy",5,0);
}