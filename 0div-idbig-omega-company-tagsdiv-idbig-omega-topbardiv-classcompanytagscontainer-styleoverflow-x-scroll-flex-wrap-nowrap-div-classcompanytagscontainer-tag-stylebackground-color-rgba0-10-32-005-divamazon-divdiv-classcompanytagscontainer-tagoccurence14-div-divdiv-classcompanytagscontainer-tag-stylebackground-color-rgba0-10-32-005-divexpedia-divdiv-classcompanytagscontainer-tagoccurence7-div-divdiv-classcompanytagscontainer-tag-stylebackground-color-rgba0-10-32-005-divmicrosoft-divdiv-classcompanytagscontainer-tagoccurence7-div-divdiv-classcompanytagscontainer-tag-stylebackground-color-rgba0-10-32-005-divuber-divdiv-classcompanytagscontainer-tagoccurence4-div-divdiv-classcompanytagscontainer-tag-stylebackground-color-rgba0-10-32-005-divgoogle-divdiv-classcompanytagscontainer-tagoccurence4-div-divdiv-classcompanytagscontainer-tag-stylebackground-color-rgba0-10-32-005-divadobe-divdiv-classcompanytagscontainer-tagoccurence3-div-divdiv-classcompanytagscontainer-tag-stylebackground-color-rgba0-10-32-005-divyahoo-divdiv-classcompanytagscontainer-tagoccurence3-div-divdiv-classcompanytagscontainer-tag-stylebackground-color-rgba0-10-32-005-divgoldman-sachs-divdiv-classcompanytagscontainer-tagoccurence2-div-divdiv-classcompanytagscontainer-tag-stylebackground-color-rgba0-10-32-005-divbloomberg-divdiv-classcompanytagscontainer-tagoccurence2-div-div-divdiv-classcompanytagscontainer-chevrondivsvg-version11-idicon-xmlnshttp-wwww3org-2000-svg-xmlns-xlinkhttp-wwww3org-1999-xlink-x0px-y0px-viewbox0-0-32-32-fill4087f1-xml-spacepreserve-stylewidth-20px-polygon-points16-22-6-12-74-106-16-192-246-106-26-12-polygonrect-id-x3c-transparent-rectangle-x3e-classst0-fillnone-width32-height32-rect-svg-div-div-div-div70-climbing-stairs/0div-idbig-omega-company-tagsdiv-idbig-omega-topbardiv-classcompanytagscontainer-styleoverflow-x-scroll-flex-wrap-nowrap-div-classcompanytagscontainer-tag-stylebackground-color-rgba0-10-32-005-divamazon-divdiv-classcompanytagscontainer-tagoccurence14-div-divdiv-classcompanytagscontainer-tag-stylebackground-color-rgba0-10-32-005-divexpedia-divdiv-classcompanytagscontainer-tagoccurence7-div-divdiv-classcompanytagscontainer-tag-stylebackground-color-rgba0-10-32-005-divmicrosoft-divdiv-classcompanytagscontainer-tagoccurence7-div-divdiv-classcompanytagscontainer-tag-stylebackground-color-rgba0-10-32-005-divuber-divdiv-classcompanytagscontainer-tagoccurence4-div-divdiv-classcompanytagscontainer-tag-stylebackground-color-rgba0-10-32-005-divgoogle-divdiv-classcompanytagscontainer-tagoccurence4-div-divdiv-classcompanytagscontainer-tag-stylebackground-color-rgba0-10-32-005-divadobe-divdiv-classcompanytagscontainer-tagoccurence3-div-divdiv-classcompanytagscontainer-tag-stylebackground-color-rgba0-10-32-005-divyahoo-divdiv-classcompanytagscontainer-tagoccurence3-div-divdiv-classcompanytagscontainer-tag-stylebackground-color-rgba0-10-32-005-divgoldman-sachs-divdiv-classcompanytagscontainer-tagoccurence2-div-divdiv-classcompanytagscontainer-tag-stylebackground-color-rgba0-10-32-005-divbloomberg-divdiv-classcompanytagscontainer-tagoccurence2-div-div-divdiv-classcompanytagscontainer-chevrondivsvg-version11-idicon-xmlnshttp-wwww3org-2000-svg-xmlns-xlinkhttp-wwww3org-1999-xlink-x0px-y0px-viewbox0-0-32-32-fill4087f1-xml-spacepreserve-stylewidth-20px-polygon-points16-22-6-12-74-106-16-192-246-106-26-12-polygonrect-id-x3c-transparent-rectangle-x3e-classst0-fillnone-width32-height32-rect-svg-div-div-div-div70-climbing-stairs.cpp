class Solution {
public:
    int climbStairs(int n) {
        if(n<=1)
            return n;
        int one=1;  // 2nd last
        int two=1;  // last
        int sum=one+two;
        n=n-2;
        while(n>0){
            two=one;
            one=sum;
            sum=one+two;
            n--;
        }
        return sum;
    }
}; 