class Solution {
public:
    int minOperations(string s) {
        int mini=0;
        for(int i=0;i<s.size();i++){
            char ep = (i % 2 == 0) ? '0' : '1';
            if(ep!=s[i])
                mini++;
        }
        return min(mini,(int)(s.size()-mini));
    }
};