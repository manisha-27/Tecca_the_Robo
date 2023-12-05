class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int i=0,j=1,count=0;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]<target)
                count++;
            }
        }
        // while(j<nums.size()){
        //     if(nums[i]+nums[j]<target)
        //         count++;
        //     i++;j++;
        // }
        return count;
    }
};