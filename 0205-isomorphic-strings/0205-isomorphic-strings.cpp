class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            // cout<<1<<endl;
            return false;
        }
        map<char,char> c,d;
        for(int i=0;i<s.length();i++){
            if(c.find(s[i])!=c.end() && c[s[i]]!=t[i]){
                // cout<<s[i]<<" "<<t[i]<<" "<<c[s[i]]<<endl;
                return false;
            }
            if(d.find(t[i])!=d.end() && d[t[i]]!=s[i]){
                // cout<<s[i]<<" "<<t[i]<<" "<<c[s[i]]<<endl;
                return false;
            }
            c[s[i]]=t[i];
            d[t[i]]=s[i];
        }
        return true;
    }
};