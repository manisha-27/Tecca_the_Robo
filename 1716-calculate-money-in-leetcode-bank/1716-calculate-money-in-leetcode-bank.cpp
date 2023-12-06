class Solution {
public:
    int sum(int n){
        int s=0;
        for(int i=1;i<=n;i++)
            s+=i;
        return s;
    }
    int totalMoney(int n) {
        int a=sum(7); 
        int b=n/7;   // no. of weeks
        int c=n%7;   // no of days apart from weeks
        return b*(a)+7*sum(b-1)+sum(c)+(c*b);
    }
};