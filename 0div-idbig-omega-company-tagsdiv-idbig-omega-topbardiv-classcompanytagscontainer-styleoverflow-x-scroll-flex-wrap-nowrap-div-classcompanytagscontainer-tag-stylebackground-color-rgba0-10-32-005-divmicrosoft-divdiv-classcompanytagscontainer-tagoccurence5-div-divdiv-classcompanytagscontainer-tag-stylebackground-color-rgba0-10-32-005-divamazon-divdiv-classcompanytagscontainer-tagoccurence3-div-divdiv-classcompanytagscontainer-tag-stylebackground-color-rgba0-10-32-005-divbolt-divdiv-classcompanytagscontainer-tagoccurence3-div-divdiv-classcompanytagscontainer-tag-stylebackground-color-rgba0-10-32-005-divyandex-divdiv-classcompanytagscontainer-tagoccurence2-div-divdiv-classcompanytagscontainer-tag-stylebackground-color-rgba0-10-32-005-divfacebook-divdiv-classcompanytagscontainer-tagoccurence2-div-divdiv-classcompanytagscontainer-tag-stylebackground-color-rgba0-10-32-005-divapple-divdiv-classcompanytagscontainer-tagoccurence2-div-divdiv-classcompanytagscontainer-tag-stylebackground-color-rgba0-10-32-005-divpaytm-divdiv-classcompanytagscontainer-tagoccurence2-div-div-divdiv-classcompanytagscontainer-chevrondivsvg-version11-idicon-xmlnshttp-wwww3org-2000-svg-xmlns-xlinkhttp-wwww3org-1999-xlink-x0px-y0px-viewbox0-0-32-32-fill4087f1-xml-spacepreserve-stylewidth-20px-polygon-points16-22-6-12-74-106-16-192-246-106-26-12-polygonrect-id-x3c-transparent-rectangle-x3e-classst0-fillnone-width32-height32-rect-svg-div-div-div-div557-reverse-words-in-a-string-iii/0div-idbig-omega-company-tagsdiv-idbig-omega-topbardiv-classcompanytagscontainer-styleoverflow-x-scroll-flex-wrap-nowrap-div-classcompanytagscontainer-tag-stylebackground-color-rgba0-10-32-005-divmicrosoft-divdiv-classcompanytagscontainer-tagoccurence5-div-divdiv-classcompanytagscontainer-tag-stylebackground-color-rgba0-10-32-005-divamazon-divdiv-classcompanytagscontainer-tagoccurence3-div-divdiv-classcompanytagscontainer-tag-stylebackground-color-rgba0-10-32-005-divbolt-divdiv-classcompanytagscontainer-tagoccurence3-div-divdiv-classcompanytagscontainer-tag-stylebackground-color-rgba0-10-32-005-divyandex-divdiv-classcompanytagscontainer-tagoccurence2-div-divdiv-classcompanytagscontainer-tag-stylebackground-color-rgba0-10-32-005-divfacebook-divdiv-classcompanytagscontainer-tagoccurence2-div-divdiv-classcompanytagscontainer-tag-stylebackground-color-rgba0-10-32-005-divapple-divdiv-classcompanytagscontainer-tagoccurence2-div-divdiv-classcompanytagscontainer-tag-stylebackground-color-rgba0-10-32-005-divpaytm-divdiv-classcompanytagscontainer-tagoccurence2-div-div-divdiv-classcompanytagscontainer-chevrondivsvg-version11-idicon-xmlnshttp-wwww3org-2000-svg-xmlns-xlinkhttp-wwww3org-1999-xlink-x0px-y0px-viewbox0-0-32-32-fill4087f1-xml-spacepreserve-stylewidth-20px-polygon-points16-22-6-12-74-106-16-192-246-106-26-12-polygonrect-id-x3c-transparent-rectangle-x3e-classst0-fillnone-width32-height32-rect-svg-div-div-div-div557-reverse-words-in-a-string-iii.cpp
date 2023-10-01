class Solution {
public:
    string reverse(string s){
        string str="";
        for(int i=s.length()-1;i>=0;i--){
            str+=s[i];
        }
        return str;
    }
    string reverseWords(string s) {
        int i=0,j=0;
        string str;
        while(j<s.length()){
            if(s[j]==' '){
                str+=reverse(s.substr(i,j-i))+' ';
                // cout<<reverse(s.substr(i,j-i))<<endl;
                i=j+1;
            }
            j++;
        }
        str+=reverse(s.substr(i,j-i));
        // cout<<reverse(s.substr(i,j-i))<<endl;
        return str;
    }
};