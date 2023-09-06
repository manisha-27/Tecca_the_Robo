class Solution {
public:
    vector<vector<int>> power;
    void helper(vector<int>& nums, vector<int>& pwr, int i){
        if(i>=nums.size()){
            power.push_back(pwr);
            return;
        }
        pwr.push_back(nums[i]);
        helper(nums,pwr,i+1);
        pwr.pop_back();
        helper(nums,pwr,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> pwr;
        helper(nums,pwr,0);
        return power;
    }
};