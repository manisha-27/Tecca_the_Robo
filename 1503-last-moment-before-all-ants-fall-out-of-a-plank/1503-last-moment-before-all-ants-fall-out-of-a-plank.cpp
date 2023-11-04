class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans=0;
        for(int num: left) ans=max(ans,num);
        for(int num: right) ans=max(ans,n-num);
        return ans;
        // if(left.size()==0 || right.size()==0){
        //     return n;
        // }
        // return n;
    }
};