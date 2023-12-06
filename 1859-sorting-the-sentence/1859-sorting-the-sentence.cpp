class Solution {
public:
    string sortSentence(string s) {
        map<int,string> sen;
        for(int i=0;i<s.size();i++){
            string str="";
            while(s[i]!=' ' && i<s.size()){
                str+=s[i];
                i++;
            }
            int n=(int)(str[str.size()-1]-'0');
            str.pop_back();
            sen[n]=str;
        }
        s="";
        for(auto a: sen){
            s+=""+a.second;
            s+=" ";
        }
        if (!s.empty()) {
            s.pop_back();
        }
        return s;
    }
};