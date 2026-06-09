#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i = 1 ; i <= n ; i++){
        char c = 65;
        //space
        for(int j = n ; j >= i ; j--){
            cout << " ";
        }
        //left half char triangle
        for(int j = 1 ; j <= i ; j++){
            cout << c ;
            c++;
        }
        //right half char triangle
        char ch = 'A' + i - 2;      
        for(int j = 1 ; j < i ; j++){
            cout << ch ;
            ch--;
            
        }
        cout << endl;
    }
}