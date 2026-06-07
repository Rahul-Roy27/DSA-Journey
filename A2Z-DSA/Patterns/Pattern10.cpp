#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1 ; i < 2*n ; i++){
        //upper
        if(i <= (2*n)/2)
        {
            for(int j = 1 ; j<=i ; j++){
                cout << "*";
            }
            cout << endl;
        }
        if(i>(2*n)/2){
            for(int j = 1 ; j < 2*n - i ; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
}