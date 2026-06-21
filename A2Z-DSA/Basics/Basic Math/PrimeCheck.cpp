// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n ;
//     cin >> n;
//     int countDiv = 0;
//     for(int i = 1 ; i<= n ; i++){
//         if(n%i==0){
//             cout << i << " ";
//             countDiv++;
//         }
//     }
//     cout << endl << countDiv << endl;
//     if(countDiv == 2){
//         cout << "Prime";
//     }else{
//         cout << "Not Prime";
//     }
    
// }


// === Optimal Approach ===
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    bool isPrime = true;
    for(int i = 2 ; i*i <= n ; i++){
        if( n % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout << "Prime";
    }else{
        cout << "Not Prime";
    }
}


