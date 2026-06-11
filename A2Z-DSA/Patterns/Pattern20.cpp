#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n ;
    //upper
    for(int i = 1 ; i<=  n ; i++){
        //star
        for(int j = 1 ; j <= i ; j++){
            cout<<"*";
        }
        //space
        for(int j = 1 ; j <= 2*(n - i) ; j++){
            cout << " ";
        }
        //star
        for(int j = 1 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //Lower
    for(int i = 2 ; i<=  n ; i++){
        //star
        for(int j = 1 ; j <= n-i+1 ; j++){
            cout<<"*";
        }
        //space
        for(int j = 2 ; j < 2*i ; j++){
            cout << " ";
        }
        //star
        for(int j = 1 ; j <= n-i+1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}