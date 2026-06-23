#include <bits/stdc++.h>
using namespace std;

void print_N_to_1(int n){
    if(n <= 0){
        return;
    }
    // print_N_to_1(n-1);   ---> print while coming back up the call stack. --> 1 2 3 4 5 
    cout << n  << " ";
    print_N_to_1(n-1);  // ----> print while goin down the recursive calls ---> 5 4 3 2 1 
}

int main(){
    print_N_to_1(10);
}