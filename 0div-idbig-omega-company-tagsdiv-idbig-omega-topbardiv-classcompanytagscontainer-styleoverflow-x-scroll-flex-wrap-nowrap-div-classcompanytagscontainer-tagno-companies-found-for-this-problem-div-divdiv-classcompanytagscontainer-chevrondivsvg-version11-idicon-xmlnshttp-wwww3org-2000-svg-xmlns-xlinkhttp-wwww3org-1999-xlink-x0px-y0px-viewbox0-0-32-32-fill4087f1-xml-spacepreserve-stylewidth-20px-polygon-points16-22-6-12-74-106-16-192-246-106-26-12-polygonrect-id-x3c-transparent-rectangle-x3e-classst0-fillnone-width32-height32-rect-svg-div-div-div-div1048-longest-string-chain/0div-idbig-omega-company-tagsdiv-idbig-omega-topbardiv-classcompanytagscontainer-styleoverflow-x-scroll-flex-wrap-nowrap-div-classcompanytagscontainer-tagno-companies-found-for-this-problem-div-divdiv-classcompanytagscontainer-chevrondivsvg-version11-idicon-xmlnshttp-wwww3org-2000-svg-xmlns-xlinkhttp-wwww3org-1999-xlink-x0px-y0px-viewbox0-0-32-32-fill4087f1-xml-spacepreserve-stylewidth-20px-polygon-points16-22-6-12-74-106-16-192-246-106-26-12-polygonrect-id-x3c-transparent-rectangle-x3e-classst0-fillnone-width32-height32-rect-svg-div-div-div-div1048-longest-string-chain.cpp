class Solution {
public:

    int longestStrChain(vector<string>& words) {
        std::sort(words.begin(), words.end(), [](const std::string& a, const std::string& b) {
            return a.size() < b.size();
        });
        map<string,int> dp;
        for(auto x: words)
        {
            dp[x] = 1;
        }
        int i=0;
        int mx = 1;
       
       for(int i=0;i<words.size();i++)
       {
           for(int j=0;j<words[i].size();j++)
           {
               string test = words[i];
               test.erase(j, 1);
               map <string, int>::iterator itr;
                itr = dp.find( test );
                if(itr!=dp.end())
                {
                    dp[words[i]] = max(dp[words[i]], dp[itr->first]+1);
                }
            }
            mx = max(mx, dp[words[i]]);
       }
        
        return mx;
    }
};
