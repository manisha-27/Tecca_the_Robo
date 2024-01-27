class Solution {
public:
//     void word(string s, map<string, bool> str, int i, int n){
//         if(i==n) return;
        
//         // string search=s.substr(i,n); // make substrings
//         // word()
//         int j=0;
//         while(j<=i){
//             string search=s.substr(j, i-j+1);
//             if(str.find(search)!=str.end())
//                 str[search]=true;
//             j++;
//         }
//         word(s, str, i+1, n);
//     }
    bool wordBreak(string s, vector<string>& wordDict) {
        // int i=0; // traversing the string
        int n=s.size();
        vector<bool> dp(n+1, false);
        set<string> word(wordDict.begin(), wordDict.end());
        dp[0]=true;
        for(int i=1;i<=n;i++){
            for(int j=i-1;j>=0;j--){
                string search=s.substr(j, i-j);
                if(dp[j] && (word.find(search)!=word.end())){
                    dp[i]=true;
                }
            }
        }
        return dp[n];
        // map<string, bool> mapstr;
        // for(auto a: wordDict){
        //     mapstr[a]=false;  // false signifies not present=> default value
        // }
        // word(s, mapstr, i, n);
        // int check=0;
        // int sizemap=mapstr.size();
        // for(auto a: mapstr){
        //     if(a.second) check++;
        // }
        // return check==sizemap;
    }
};