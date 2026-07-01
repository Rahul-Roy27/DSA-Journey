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


// 13. === 217. Contains Duplicate ===
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_map <int,int> mp;
//         for(int x : nums){
//             mp[x]++;
//         }
//         bool isDuplicate = false;
//         for(auto x : mp){
//             if(x.second >1){
//                 isDuplicate = true;
//             }
//         }
//         return (isDuplicate ? true : false);
//     }
// };
// --Optimal soln--
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_map <int,int> mp;
//         for(int x : nums){
//             mp[x]++;
//             if(mp[x]>1) return true;
//         }
//         return false;       
//     }
// };


// 14. === 169. Majority Element ====
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int, int> hash;
//         for (int x : nums) {
//             hash[x]++;
//         }
//         int n = nums.size();
//         for (auto x : hash) {
//             if (x.second > (n / 2)) {
//                 return x.first;
//             }
//         }
//         return -1; 
//         // ---> Function must return an int on every execution path.
//         // Although LeetCode guarantees a majority element exists,
//         // return -1 satisfies the compiler if no element is found.
//     }
// };


// 15. === 349. Intersection of Two Arrays ===
// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         // Store all UNIQUE elements of nums1.
//         unordered_set<int> st(nums1.begin(), nums1.end());
//         // Using a set ensures the answer also contains only UNIQUE elements.
//         unordered_set<int> ans;
//         // Traverse nums2 and check if each element exists in nums1.
//         for (int x : nums2) {
//             // count(x) returns:
//             // 1 -> element exists
//             // 0 -> element doesn't exist
//             if (st.count(x)) {
//                 ans.insert(x);   // insert() ignores duplicates automatically.
//             }
//         }
//         // Convert the unordered_set into a vector because LeetCode expects vector<int>.
//         vector<int> v(ans.begin(), ans.end());
//         return v;
//     }
// };


// 16. === 88. Merge Sorted Array ===
    // Problem: 88. Merge Sorted Array
    // Approach:
    // - Copy first m elements of nums1.
    // - Copy all n elements of nums2.
    // - Bubble Sort.
    // - Assign back to nums1.
    // Time Complexity: O((m+n)²)
    // Space Complexity: O(m+n)
    // Learned:
    // - m tells us how many valid elements are in nums1.
    // - Placeholder zeroes should not be copied.
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         vector <int> mergedArr;
//         for(int i = 0 ; i < m ; i++){
//             mergedArr.push_back(nums1[i]);           
//         }
//         for(int i = 0 ; i < n ; i++){
//             mergedArr.push_back(nums2[i]);
//         }
//         int mn = mergedArr.size();
//         for(int i = 0 ; i < mn - 1 ; i++){
//             for(int j = 0 ; j < mn - i - 1 ; j++){
//                 if(mergedArr[j] > mergedArr[j+1]){
//                     int temp = mergedArr[j];
//                     mergedArr[j] = mergedArr[j+1];
//                     mergedArr[j+1] = temp;
//                 }
//             }
//         }
//         nums1 = mergedArr ;
//     }
// };


// 17. === 