class Solution {
public:
    char findTheDifference(string s, string t) {
        char c=s[0];
        for(int i=1;i<s.length();i++)
            c^=s[i];
        for(int i=0;i<t.length();i++)
            c^=t[i];
        return c;
    }
};