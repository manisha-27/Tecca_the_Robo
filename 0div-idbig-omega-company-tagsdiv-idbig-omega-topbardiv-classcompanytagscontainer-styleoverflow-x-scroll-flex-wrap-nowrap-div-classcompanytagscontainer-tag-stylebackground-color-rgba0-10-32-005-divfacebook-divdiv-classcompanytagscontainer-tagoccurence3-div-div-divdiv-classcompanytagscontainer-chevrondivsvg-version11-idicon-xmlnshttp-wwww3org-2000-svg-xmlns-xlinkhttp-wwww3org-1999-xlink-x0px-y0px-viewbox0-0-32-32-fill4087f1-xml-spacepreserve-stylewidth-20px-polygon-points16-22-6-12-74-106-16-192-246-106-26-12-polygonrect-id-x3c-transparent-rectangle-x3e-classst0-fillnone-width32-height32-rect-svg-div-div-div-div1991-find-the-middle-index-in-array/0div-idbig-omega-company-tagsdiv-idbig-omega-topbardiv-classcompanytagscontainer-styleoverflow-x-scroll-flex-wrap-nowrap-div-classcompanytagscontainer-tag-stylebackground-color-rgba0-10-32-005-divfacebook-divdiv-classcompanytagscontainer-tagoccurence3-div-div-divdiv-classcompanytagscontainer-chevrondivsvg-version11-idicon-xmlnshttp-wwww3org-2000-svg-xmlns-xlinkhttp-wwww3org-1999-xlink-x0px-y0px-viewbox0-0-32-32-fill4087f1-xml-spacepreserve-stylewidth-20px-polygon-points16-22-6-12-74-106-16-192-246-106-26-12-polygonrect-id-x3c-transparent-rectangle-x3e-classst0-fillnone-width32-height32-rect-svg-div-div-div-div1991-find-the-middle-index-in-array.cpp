class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int> psum;
        psum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            psum.push_back(nums[i]+psum[i-1]);
        }
        int n=psum.size();
        for(int i=0;i<n;i++){
            if((i==0 && psum[n-1]-psum[i]==0) || (i!=0 && psum[i-1]==psum[n-1]-psum[i])  || (i==psum.size()-1 && psum[n-2]==0))
                return i;
        }
        return -1;
    }
};