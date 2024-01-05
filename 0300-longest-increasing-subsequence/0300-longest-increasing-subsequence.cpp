class Solution {
public:
    int maxSeq(vector<int>& nums, int index, int prev_idx, vector<vector<int>>& dp){
        int len=0;
        if(index>=nums.size())
            return len;
        // Exclude
        if(dp[index][prev_idx+1]!=-1)
            return dp[index][prev_idx+1];
        len=0+maxSeq(nums,index+1,prev_idx,dp);
        if(prev_idx==-1 || nums[index]>nums[prev_idx]){
            len=max(len,1+maxSeq(nums,index+1,index,dp));
        }
        return dp[index][prev_idx+1]=len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        int index=0,prev_idx=-1;
        return maxSeq(nums,index,prev_idx, dp);
    }
};