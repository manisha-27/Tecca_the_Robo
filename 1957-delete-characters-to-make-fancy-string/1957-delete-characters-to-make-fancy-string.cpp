class Solution {
public:
    string makeFancyString(string s) {
        if(s.length()<3)
            return s;
        int count=0;
        string str="";
        str+=s[0];
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                // cout<<s[i]<<endl;
                count++;
                if(count>=2){
                    // cout<<s[i]<<endl;
                    continue;
                }
            }else{
                count=0;
            }
            str+=s[i];
        }
        return str;
    }
};