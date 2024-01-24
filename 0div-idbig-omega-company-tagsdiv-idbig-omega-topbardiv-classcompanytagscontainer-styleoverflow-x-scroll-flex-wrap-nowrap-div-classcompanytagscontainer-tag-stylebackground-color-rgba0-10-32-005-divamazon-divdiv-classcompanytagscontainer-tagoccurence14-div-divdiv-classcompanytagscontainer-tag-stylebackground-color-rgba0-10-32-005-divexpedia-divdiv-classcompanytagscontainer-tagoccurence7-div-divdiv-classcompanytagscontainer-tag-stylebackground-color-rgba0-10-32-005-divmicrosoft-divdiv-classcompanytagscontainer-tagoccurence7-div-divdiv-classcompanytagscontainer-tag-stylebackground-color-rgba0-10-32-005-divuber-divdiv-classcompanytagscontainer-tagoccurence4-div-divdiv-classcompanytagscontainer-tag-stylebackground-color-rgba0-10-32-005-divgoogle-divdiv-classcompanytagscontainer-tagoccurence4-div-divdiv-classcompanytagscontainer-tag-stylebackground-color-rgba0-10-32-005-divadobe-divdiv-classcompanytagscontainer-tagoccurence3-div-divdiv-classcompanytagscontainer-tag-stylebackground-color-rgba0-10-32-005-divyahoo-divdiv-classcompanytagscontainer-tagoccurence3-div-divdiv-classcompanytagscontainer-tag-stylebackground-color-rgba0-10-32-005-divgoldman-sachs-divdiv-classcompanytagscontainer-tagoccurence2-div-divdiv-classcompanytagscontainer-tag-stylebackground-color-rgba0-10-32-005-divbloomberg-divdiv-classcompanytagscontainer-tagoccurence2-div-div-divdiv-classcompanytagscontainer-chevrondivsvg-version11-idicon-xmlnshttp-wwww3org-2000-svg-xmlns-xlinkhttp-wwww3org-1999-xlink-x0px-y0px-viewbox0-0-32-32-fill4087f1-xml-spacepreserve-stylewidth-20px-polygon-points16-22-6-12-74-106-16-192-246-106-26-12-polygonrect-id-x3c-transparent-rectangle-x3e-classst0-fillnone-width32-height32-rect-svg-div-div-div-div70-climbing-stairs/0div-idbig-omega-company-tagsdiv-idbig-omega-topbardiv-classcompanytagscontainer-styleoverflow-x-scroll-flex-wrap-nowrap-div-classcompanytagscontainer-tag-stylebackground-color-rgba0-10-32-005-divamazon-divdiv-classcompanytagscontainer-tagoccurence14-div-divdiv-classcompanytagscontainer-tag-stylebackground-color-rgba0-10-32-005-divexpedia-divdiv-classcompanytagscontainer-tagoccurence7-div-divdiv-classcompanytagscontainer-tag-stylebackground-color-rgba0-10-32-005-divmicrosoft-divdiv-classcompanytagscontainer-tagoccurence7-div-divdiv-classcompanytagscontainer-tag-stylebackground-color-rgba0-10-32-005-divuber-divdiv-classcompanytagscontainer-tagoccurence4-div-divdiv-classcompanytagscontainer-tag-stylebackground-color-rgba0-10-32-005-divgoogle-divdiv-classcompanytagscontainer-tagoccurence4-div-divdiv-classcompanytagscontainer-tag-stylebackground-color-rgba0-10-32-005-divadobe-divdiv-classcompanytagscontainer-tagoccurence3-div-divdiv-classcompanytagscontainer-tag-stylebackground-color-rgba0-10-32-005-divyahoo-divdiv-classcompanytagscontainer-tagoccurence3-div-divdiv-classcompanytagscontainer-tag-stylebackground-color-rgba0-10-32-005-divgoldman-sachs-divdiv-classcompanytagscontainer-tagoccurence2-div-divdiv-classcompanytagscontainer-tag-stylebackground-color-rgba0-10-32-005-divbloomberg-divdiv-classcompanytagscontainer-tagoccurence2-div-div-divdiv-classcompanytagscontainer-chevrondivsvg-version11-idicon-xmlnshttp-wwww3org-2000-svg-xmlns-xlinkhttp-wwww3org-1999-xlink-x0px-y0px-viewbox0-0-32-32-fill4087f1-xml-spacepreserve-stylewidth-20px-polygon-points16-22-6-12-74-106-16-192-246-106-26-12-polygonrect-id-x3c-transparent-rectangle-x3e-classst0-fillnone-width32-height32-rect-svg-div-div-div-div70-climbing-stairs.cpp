// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n<=1)
//             return n;
//         int one=1;  // 2nd last
//         int two=1;  // last
//         int sum=one+two;
//         n=n-2;
//         while(n>0){
//             two=one;
//             one=sum;
//             sum=one+two;
//             n--;
//         }
//         return sum;
//     }
// }; 

class Solution {
public:
    int solve(int n, vector<int>& dp){
        if(n==0 || n==1)
            return dp[n]=1;
        if(dp[n]!=0)
            return dp[n];
        return dp[n]=solve(n-1,dp)+solve(n-2,dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,0);
        return solve(n, dp);
    }
};

// class Solution {
// public:
//     int dp[47] = {0};
//     int solve(int n) {
//         if(n<0) {
//             return 0;
//         }
//         if(n==0) {
//             return 1;
//         }
//         if(dp[n]!=0) {
//             return dp[n];
//         }
//         dp[n] = solve(n-1) + solve(n-2);
//         return dp[n];
//     }
//     int climbStairs(int n) {
//         return solve(n);
//     }
// };