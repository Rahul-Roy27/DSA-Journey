#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i +  1)
            {
                cout << "*" ;
            }
                
        }
        cout << endl;
        
    }
    
}



//===right inverted===
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int space = 0; space < n; space++)
//         {
//             if (space < n - i - 1)
//             {
//                 cout << " ";
//             }else{
//                 cout<< "*";
//             }
            
//         }
        
//         cout << endl;
//     }
// }