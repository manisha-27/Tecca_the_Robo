class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(),1);
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]*nums[i];
        }
        int suffix=1;
        for(int i=nums.size()-1;i>0;i--){
            prefix[i]=suffix*prefix[i-1];
            suffix*=nums[i];
        }
        prefix[0]=suffix;
        return prefix;
    }
};