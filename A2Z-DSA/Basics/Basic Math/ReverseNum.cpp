// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int num;
//     cin >> num ;
//     long long int revNum = 0 ;
//     int r = 0;
//     bool neg = false;
//     if(num<0){
//         neg = true;
//         num *= -1 ;
//     }
//     while(num>0){
//         r = num % 10 ;
//         revNum = revNum*10 + r;
//         num /= 10;
//     }
//     if(neg){
//         revNum =  (-1)*revNum;
//     }

//     if(revNum > INT_MAX || revNum < INT_MIN){
//         cout << 0 ;
//     }else{
//         cout << revNum ;
//     }
// }

//<======LEETCODE 7 : Reverse Integer ========>
#include <bits/stdc++.h>
using namespace std;
int reverse(int x)
{
    int revNum = 0;
    while (x != 0)
    {
        int digit = x % 10;
        if (revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && digit > 7))
        {
            return 0;
        }
        if (revNum < INT_MIN / 10 || (revNum == INT_MIN / 10 && digit < -8))
        {
            return 0;
        }
        revNum = revNum * 10 + digit;
        x /= 10;
    }
    return revNum;
}

int main(){
    cout << reverse(-123);
}