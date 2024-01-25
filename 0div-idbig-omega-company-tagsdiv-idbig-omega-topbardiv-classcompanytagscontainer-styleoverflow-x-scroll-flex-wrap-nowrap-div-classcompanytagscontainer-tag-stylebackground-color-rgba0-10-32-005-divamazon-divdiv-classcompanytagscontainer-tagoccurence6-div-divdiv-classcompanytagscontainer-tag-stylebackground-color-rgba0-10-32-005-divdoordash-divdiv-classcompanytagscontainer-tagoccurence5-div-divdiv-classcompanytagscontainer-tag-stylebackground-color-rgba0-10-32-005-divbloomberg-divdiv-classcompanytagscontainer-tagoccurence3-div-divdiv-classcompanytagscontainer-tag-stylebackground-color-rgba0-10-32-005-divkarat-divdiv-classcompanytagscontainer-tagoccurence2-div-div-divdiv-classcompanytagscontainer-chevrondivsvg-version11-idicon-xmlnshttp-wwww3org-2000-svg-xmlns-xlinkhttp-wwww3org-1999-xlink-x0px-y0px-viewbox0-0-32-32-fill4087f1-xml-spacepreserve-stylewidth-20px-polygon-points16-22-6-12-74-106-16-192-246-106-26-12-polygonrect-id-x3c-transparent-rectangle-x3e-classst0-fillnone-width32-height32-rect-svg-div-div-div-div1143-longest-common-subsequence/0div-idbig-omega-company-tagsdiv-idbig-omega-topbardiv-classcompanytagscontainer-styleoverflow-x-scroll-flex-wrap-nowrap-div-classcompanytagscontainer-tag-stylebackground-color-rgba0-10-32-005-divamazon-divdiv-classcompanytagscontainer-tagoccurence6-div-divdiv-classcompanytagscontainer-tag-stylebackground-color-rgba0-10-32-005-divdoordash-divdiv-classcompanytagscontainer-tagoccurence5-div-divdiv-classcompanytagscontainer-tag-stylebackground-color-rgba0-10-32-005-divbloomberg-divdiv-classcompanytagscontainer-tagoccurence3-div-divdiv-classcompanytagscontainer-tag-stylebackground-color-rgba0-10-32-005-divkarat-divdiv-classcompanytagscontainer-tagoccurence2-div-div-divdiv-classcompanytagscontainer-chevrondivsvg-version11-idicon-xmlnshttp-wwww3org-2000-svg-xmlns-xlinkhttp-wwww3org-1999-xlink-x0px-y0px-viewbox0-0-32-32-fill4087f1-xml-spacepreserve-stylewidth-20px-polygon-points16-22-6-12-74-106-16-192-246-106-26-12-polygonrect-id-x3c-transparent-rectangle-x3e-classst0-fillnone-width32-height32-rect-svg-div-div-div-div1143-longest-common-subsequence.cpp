// class Solution {
// public:
//     int longestCommonSubsequence(string text1, string text2) {
        
//     }
// };

// Naaaa


// class Solution {
// public:
//     int longestCommonSubsequence(string &a, string &b) {
//     short m[2][1000] = {};
//     for (int i = 0; i < a.size(); ++i)
//         for (int j = 0; j < b.size(); ++j)
//             m[!(i % 2)][j + 1] = a[i] == b[j] ? m[i % 2][j] + 1 : max(m[i % 2][j + 1], m[!(i % 2)][j]);
//     return m[a.size() % 2][b.size()];
// }
// };

class Solution {
public:
   
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size(),n=text2.size();
        int dp[m+1][n+1];
        for(int i=0;i<m+1;i++){
            dp[i][0]=0;
        }
        for(int i=0;i<n+1;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
               if(text1[i-1]==text2[j-1]){
                  dp[i][j]= 1+dp[i-1][j-1];
               }else{
                   dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
               } 
            }
        }
        return dp[m][n];
    }
};
