#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    //upper
    for (int i = 1 ; i <= n ; i++){
            //space
            for(int j = 1; j <= n - i ; j++){
                cout << " ";
            }
            //star
            for(int j = 1 ; j<= 2*i - 1 ; j++){
                cout << "*";
            }
            //space
            for(int j = 1; j <= n - i ; j++){
                cout << " ";
            }
            cout << endl;
    }
    //lower
    for(int i = 2 ; i<= n ; i++){
        //space
        for(int j = 1 ; j <= i-1; j++){
            cout << " ";
        }
        //star
        for(int j = 1 ; j <= (2*n - (2*i - 1)) ; j++){
            cout << "*";
        }
        //space
        for(int j = 1 ; j <= i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}