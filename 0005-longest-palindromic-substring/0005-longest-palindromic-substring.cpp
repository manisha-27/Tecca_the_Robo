class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<=1)
            return s;
        int maxi=0;
        string longstr="";
        longstr+=s[0];
        int i=0;
        while(i<s.length()){
            // cout<<1<<endl;
            int left=i-1,right=i+1;
            while(s[i]==s[right]){
                int range=right-i+1;
                if(range>maxi){
                    maxi=range;
                    longstr=s.substr(i,range);
                }
                right++;
            }
            while(left>=0 && right<s.length() && s[left]==s[right]){
                    int range=right-left+1;
                    // cout<<range<<"*"<<endl;
                    if(range>maxi){
                        maxi=range;
                        longstr=s.substr(left,range);
                    }
                left--;
                right++;
                // cout<<2<<endl;
            }
            i++;
        }
        return longstr;
    }
};