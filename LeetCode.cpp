// 1. === 7. Reverse Integer ===
// class Solution {
// public:
//     int reverse(int x) {
//         int revNum = 0;
//         while (x != 0) {
//             int digit = x % 10;
//             if (revNum > INT_MAX / 10 ||
//                 (revNum == INT_MAX / 10 && digit > 7)) {
//                 return 0;
//             }
//             if (revNum < INT_MIN / 10 ||
//                 (revNum == INT_MIN / 10 && digit < -8)) {
//                 return 0;
//             }
//             revNum = revNum * 10 + digit;
//             x /= 10;
//         }
//         return revNum;
//     }
// };


// 2. === 9 . Palindrome Number ===
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         int n = x;
//         long long revNum = 0;
//         if (n < 0)
//             return 0;
//         while (n != 0) {
//             int r = n % 10;
//             revNum = revNum * 10 + r;
//             n /= 10;
//         }
//         return revNum == x;
//     }
// };


// 3. === 1523 . Count odd numbers in a interval ===
// class Solution {
// public:
//     int countOdds(int low, int high) {
//         int count = 0;
//         for(int i = low ; i <= high ; i++){
//             if(i%2!=0){
//                 count++;
//             }
//         }
//         return count;
//     }
// };


// 4. === 231 . Power of Two ===
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n <= 0 ) return false;
//         while(n%2==0){
//             n /= 2;
//         }
//         if(n==1){
//             return true;
//         }else{
//             return false;
//         }
//     }
// };


// 5. === 1281 . Subtract the Product and Sum of Digits of an Integer ===
// class Solution {
// public:
//     int subtractProductAndSum(int n) {
//         int sum = 0 , prod = 1;
//         while(n>0){
//             sum += n%10;
//             prod *= n%10;
//             n /= 10;
//         }
//         return prod - sum ;
//     }
// };

