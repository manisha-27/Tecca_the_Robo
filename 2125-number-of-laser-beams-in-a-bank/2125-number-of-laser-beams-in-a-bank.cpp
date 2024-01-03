class Solution {
public:
    int countBits(string n)
    {
        int setBits=0;
        for (char c : n) {
            if (c == '1') {
                setBits++;
            }
        }
        return setBits;
    }
    int numberOfBeams(vector<string>& bank) {
        int i=0,j=0;
        int count=0,t=0;
        map<int,int> security;
        while(t<bank.size()){
            security[t]=countBits(bank[t]);
            t++;
        }
        // security[0]=3;
        // security[1]=0;
        // security[2]=2;
        // security[3]=1;
        for(auto a: security){
            if(a.second!=0){
                j=a.second;
            count+=(j*i);
            i=j;}
        }
        return count;
    }
};