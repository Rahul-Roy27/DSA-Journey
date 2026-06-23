#include <bits/stdc++.h>
using namespace std;
void print_N_times(int start,int n){
    if(start > n ){
        return;
    }
    cout << start << " ";
    print_N_times(start+1,n);
}
int main(){
    print_N_times(1,10);
}