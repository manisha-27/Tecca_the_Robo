class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,vector<int>> level;
        for(int i=0;i<nums.size();i++){
            int lvl;
            if(nums[i]<0) lvl=0;
            else lvl=1;
            level[lvl].push_back(nums[i]);
        }
        auto a1=level[0].begin();
        auto a2=level[1].begin();
        int i=0;
        nums={};
        while(i<level[0].size()){
            nums.push_back(*a2);
            nums.push_back(*a1);
            i++;
            a1++;a2++;
        }
        return nums;
    }
};