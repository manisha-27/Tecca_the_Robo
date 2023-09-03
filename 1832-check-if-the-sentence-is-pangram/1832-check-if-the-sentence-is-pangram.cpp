class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int> pangram;
        for(auto c: sentence){
            pangram[c]+=1;
        }
        return pangram.size()==26?true:false;
    }
};