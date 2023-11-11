class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0,k=1;
        int zcount=0,ans=INT_MIN;
        while(j<nums.size()){
            if(nums[j]==0){
                zcount++;
                
                while(zcount>k){
                    if(nums[i]==0) zcount--;
                    i++;
                }
            }
            ans=max(ans,j-i);
            j++;
        }
        return ans;
    }
};