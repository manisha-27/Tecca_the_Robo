class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumsff=0;
        for(auto a: nums){
            sumsff+=a;
        }
        int sumpff=0;
        for(int i=0;i<nums.size();i++){
            sumsff-=nums[i];
            if(sumsff==sumpff) return i;
            sumpff+=nums[i];
        }
        return -1;
        // int i=0,j=nums.size()-1;
        // int sumi=nums[i],sumj=nums[j];
        // i++;j--;
        // while(i<j){
        //     if(sumi<sumj){
        //         sumi+=nums[i];
        //         i++;
        //     }else if(sumi>sumj){
        //         sumj+=nums[j];
        //         j--;
        //     }else{
        //         sumi+=nums[i];
        //         sumj+=nums[j];
        //         i++;j--;
        //     }
        // }
        // return sumi==sumj?i:-1;
    }
};