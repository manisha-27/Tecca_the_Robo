class Solution {
public:
    string defangIPaddr(string address) {
        string str="";
        int i=0;
        while(i<address.size()){
            if(address[i]=='.')
                str+="[.]";
            else
                str+=address[i];
            i++;
        }
        return str;
    }
};