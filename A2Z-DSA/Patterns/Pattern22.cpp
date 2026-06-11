#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < 2*n - 1 ; i++){
        for(int j = 0 ; j< 2*n -1 ; j++){
            int top = i ;
            int left = j ;
            int bot = (2*n-2) - i;
            int right = (2*n - 2) - j;
            cout << n - min(min(top,bot),min(right,left)) << " ";
        }
        cout << endl;
    }
}