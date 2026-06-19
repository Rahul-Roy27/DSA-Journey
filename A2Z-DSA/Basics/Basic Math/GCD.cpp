// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n1, n2;
//     cin >> n1 >> n2;
//     vector<int> v1;
//     for (int i = 1; i <= n1; i++)
//     {
//         if (n1 % i == 0)
//         {
//             v1.push_back(i);
//         }
//     }
//     for (auto x : v1)
//     {
//         cout << x << " ";
//     }
//     cout << endl;

//     vector<int> v2;
//     for (int i = 1; i <= n2; i++)
//     {
//         if (n2 % i == 0)
//         {
//             v2.push_back(i);
//         }
//     }
//     for (auto x : v2)
//     {
//         cout << x << " ";
//     }
//     cout << endl;

//     int GCD = 1;
//     for (int i = 0; i < v1.size(); i++) // or --> for(int i = min(n1,n2) ; i > 0 ; i--){
//     {
//         for (int j = 0; j < v2.size(); j++) // if (n1 % i == 0 && n2%i==0){
//         {                                   // print(i)
//             if (v1[i] == v2[j])             // break;
//             {                               // }
//                 GCD = v1[i];
//             }
//         }
//     }
//     cout << "GCD = " << GCD;
// }


// ======Euclid Algo=====
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    // Keep running until one number becomes 0
    while(a > 0 && b > 0){

        // If a is bigger, replace it with its remainder
        if(a > b){
            a = a % b;
        }

        // Otherwise replace b with its remainder
        else{
            b = b % a;
        }
    }

    // The non-zero number is the GCD
    if(a == 0){
        cout << "GCD = " << b;
    }
    else{
        cout << "GCD = " << a;
    }

    return 0;
}