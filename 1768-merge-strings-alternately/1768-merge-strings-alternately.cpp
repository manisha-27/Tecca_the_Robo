class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int i=0,j=0;
        while(i<word1.length() && i<word2.length()){
            s+=word1[i];
            s+=word2[i];
            i++;
        }
        while(i<word2.length()){
            s+=word2[i];
            i++;
        }
        while(i<word1.length()){
            s+=word1[i];
            i++;
        }
        return s;
    }
};