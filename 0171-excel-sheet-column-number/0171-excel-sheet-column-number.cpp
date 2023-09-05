class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum=0;
        int l=columnTitle.length();
        if(l==1)
            return columnTitle[0]-64;
        for(int i=0;i<columnTitle.size();i++){
            sum+= (pow(26,l-1)*(columnTitle[i]-64));
            // cout<<sum<<endl;
            // cout<<pow(26,l-1)<<" "<<(columnTitle[i]-64)<<endl;
            l--;
        }
        return sum;
    }
};