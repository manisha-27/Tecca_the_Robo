class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow1=nums[0];
        int fast=nums[0];
        while(true){
            slow1=nums[slow1];
            fast=nums[nums[fast]];
            if(fast==slow1)
                break;
        }
        int slow2=nums[0];
        while(slow1!=slow2){
            slow1=nums[slow1];
            slow2=nums[slow2];
        }
        return slow1;
    }
};