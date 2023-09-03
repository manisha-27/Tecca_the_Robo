class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char> code;
        int a=97;
        for(int i=0;i<key.length();i++){
            if(key[i]==' ' || a>122 || code.count(key[i])!=0)
                continue;
            code[key[i]]=char(a);
            // cout<<char(a)<<endl;
            a++;
        }
        // for(auto b:code){
        //     cout<<b.first<<" "<<b.second<<endl;
        // }
        string s="";
        for(int i=0;i<message.length();i++){
            if(message[i]==' ')
                s+=' ';
            else{
                s+=code.at(message[i]);
            }
        }
        return s;
    }
};