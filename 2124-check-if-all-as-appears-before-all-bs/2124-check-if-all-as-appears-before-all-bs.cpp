class Solution {
public:
    bool checkString(string s) {
        int i=s.size()-1;
        int j=i;
        while(i>=0){
            if(s[i]=='a'){
                j=i-1;
                while(j>=0){
                    if(s[j]=='b')
                        return false;
                    j--;
                }
                break;
            }
            i--;
        }
        return true;
    }
};