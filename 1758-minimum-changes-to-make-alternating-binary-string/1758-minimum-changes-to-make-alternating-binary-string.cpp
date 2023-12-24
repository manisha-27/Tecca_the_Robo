class Solution {
public:
    int checkString(string s,char c){
        // int l=s.size();
        int i=0,count=0;
        // string st="";
        char d;
        if(c=='1')
            d='0';
        else
            d='1';
        while(i<s.size()){
            char m;
            if(i%2==0){
                // st+=c;
                m=c;
            }else{
                // st+=d;
                m=d;
            }
            if(m!=s[i])
                count++;
            i++;
        }
        return count;
    }
    int minOperations(string s) {
        int mini=INT_MAX;
        mini=min(mini,checkString(s,'1'));
        mini=min(mini,checkString(s,'0'));
        return mini;
    }
};