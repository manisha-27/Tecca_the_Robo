class Solution {
public:
    int findC(string s,char c){
        int a=0;
        for(char b: s){
            if(b==c) a++;
        }
        return a;
    }
    int maxScore(string s) {
        int maxSc=INT_MIN;
        int i=0,j=1,count=1;
        while(j<s.size()){
            int a=findC(s.substr(i,j-i),'0');
            int b=findC(s.substr(j),'1');
            cout<<a<<" "<<s.substr(i,j-i)<<" - "<<b<<" "<<s.substr(j)<<endl;
            maxSc=max(maxSc, a+b);
            j++;
        }
        return maxSc;
    }
};

// i=0 j=1 j-i=1
// i=0 j=2  j-i=2
// i=0