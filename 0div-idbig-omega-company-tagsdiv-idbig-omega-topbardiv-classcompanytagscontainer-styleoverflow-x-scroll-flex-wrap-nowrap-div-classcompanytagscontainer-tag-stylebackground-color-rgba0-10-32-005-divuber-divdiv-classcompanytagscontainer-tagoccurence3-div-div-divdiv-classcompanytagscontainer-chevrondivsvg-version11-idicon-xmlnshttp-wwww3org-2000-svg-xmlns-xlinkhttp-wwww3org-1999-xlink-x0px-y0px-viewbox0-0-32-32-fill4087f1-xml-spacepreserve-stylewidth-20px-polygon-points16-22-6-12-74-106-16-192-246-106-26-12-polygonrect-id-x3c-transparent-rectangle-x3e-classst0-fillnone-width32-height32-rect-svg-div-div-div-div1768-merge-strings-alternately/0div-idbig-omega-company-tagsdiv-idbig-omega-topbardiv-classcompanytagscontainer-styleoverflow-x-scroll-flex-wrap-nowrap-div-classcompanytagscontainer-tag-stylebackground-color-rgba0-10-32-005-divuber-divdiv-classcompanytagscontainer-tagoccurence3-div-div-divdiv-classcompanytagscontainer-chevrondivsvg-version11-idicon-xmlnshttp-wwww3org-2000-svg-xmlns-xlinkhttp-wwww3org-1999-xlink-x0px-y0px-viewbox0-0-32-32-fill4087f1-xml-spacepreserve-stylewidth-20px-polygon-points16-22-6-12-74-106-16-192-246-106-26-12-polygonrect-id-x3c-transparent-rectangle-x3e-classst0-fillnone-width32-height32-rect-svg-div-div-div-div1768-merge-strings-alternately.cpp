class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int i=0,j=0;
        for(;i<word1.length() && i<word2.length() ;){
            s+=word1[i];
            i++;
            s+=word2[j];
            j++;
        }
        while(j<word2.length()){
            s+=word2[j];
            j++;
        }
        while(i<word1.length()){
            s+=word1[i];
            i++;
        }
        return s;
    }
};