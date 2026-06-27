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


// 6. === 1342. Number of Steps to Reduce a Number to Zero ===
// class Solution {
// public:
//     int numberOfSteps(int num) {
//         int n = num;
//         int steps = 0;
//         while (n != 0) {
//             if (n % 2 == 0) {
//                 n /= 2;
//                 steps++;
//             } else {
//                 n--;
//                 steps++;
//             }
//         }
//         return steps;
//     }
// };


// 7. === 258. Add Digits ===
// class Solution {
// public:
//     int addDigits(int num) {
//         int sum = 0;
//         while (num > 0) {
//             sum += num % 10;
//             num /= 10;
//         }
//         if (sum <= 9 && sum >= 0) {
//             return sum;
//         } else {
//             num = sum;
//             return addDigits(num);
//         }
//     }
// };


// 8 . === 2520. Count the Digits That Divide a Number ===
// class Solution {
// public:
//     int countDigits(int num) {
//         int n = num;
//         int digit = 0;
//         while (n > 0) {
//             int r = n % 10;
//             if (num % r == 0) {
//                 digit++;
//             }
//             n /= 10;
//         }
//         return digit;
//     }
// };


// 9 . === 509. Fibonacci Number
// class Solution {
// public:
//     int fib(int n) {
//         if(n==0) return 0;
//         if(n==1) return 1;
//         return fib(n-1) + fib(n-2);
//     }
// };


// 10. === 326. Power of Three
// class Solution {
// public:
//     bool isPowerOfThree(int n) {
//         if(n <= 0 ) return false;
//         while(n%3==0){
//             n /= 3;
//         }
//         if(n==1){
//             return true;
//         }else{
//             return false;
//         }
//     }     
// };


// 11. === 69. Sqrt(x) ===
    //Brute force
// class Solution {
// public:
//     int mySqrt(int x) {
//         int i = 0;
//         while((long long)i*i <= x){
//             i++;
//         }
//         return i-1;
//     }
// };


// 12. === 242. Valid Anagram ====
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         int hash1[26] = {0};
//         int hash2[26] = {0};
//         for(char c : s){
//             hash1[c - 'a']++;
//         }
//         for(char c : t){
//             hash2[c - 'a']++;
//         }       
//         bool flag = true;
//         for(int i = 0 ; i < 26 ; i++){
//             if(hash1[i] != hash2[i] ){
//                 return false;
//             }
//         }
//         if(flag){
//             return true;
//         }else{
//             return false;
//         }      
//     }
// };


// 13. ===