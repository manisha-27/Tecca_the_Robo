class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int a=str1.length(),b=str2.length();
        string str3=a>b?str2:str1;
        int c=str3.length();
        while(c>0){
            if(b%c==0 && a%c==0){
                
                int p=b/c;
                int q=a/c;
                string s1="",s2="";
                for (int i = 0; i < p; ++i) {
                    s1 += str3;
                }
                for (int i = 0; i < q; ++i) {
                    s2 += str3;
                }
                if(s1==str2 && s2==str1)
                    return str3;
            }
            c--;
            str3.pop_back();
        }
        return "";
    }
};