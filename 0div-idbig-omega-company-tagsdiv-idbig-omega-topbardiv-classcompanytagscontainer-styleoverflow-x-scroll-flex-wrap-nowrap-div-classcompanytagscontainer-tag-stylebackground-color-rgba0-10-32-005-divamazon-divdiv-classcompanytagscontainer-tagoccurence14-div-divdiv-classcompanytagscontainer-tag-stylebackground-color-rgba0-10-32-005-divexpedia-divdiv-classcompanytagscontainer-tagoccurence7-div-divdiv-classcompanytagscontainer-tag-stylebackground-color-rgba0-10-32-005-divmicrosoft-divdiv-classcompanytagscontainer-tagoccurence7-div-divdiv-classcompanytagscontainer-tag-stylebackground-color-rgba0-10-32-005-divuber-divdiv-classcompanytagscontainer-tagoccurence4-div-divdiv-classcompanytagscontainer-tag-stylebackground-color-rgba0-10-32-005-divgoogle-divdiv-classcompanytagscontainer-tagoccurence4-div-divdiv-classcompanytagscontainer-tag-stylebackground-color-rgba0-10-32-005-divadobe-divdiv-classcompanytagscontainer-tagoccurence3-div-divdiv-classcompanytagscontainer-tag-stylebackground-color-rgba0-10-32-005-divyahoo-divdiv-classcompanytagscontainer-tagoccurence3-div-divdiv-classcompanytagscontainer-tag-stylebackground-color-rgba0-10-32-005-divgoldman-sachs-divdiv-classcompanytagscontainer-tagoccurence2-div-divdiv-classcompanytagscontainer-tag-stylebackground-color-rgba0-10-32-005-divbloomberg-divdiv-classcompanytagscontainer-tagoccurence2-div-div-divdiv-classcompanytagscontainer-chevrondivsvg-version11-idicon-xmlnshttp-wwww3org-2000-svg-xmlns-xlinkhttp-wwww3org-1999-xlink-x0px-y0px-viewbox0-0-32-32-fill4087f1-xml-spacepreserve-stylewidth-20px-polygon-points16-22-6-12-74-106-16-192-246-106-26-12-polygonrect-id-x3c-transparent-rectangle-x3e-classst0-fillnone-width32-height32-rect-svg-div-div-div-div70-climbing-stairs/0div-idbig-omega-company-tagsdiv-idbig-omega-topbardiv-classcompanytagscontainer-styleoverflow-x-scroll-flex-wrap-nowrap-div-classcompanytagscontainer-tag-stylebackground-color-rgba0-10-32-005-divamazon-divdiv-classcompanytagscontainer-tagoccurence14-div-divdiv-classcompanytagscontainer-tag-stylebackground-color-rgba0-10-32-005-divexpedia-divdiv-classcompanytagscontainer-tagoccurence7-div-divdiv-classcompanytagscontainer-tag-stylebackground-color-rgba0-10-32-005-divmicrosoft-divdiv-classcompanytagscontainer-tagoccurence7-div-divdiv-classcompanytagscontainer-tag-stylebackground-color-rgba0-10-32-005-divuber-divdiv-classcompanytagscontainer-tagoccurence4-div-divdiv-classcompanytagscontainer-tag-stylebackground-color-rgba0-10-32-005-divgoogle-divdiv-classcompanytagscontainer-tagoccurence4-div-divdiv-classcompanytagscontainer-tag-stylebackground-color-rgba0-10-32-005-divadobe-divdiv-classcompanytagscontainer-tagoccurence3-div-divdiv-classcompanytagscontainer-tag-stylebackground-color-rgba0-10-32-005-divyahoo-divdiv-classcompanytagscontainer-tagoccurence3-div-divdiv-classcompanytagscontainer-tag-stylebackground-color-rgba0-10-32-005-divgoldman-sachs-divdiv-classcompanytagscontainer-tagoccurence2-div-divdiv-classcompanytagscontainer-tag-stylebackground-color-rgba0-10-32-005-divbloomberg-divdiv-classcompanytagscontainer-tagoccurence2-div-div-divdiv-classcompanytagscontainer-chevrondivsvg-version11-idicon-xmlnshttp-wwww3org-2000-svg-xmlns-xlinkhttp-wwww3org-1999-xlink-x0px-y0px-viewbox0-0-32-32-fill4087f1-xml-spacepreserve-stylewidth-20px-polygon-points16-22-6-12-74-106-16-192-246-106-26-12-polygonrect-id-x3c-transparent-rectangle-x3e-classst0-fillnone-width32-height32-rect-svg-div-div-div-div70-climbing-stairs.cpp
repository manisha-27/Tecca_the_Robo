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
    int climbStairs(int n) {
        vector<int> dp(n+1);
        dp[0]=dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};

