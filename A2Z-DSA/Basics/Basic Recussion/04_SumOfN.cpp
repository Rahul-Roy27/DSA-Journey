#include <bits/stdc++.h>
using namespace std;

// functional way :
int sum_of_n1(int n){
    if(n<0){
        return 0 ;
    }
    return sum_of_n1(n-1) + n;
    
    
}


//Parametrised way :
int sum_of_n2(int n , int total ){
    if(n == 0){
        return total;
    }
    return sum_of_n2(n-1,total + n);
    
}

int main(){

    cout << sum_of_n1(3) << endl;
    cout << sum_of_n2(3,0) << endl;
}