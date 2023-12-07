class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        map<int,vector<int>> level;
        // int lvl; // 0=less than, 1=equal, 2=greater than
        for(int i=0;i<nums.size();i++){
            int lvl;
            if(nums[i]<pivot) lvl=0;
            else if(nums[i]==pivot) lvl=1;
            else lvl=2;
            level[lvl].push_back(nums[i]);
        }
        nums={};
        for(auto a: level){
            for(auto b: a.second)
                nums.push_back(b);
        }
        return nums;
    }
};