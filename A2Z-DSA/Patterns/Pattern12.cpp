// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= 2*n; j++)
//         {
//             if(j <= n ){
//                 if(j<=i){
//                     cout << j ;
//                 }
//                 if(j> i){
//                     cout << " ";
//                 }
//             }
//             if(j>n){
//                 if(i+j<=2*n){
//                     cout << " ";
//                 }
//                 if(i+j>2*n){
//                     cout  << 2*n + 1 - j ;
//                 }
//             }
//         }
//         cout << endl;
//     }
// }



#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++){

        //left
        for(int j = 1 ; j <= i ; j++){
            cout << j ;
        }
        //middle
        for(int j = 1 ; j <= 2*(n-i) ; j++){
            cout << " ";
        }

        //right
        for(int j = i ; j>= 1 ; j--){
            cout << j ;
        }
        cout<< endl;
        
    }
}