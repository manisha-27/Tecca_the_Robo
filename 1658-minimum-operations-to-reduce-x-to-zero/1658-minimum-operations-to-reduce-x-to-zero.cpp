class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
         int target = 0, n = nums.size();
        for (int num : nums) target += num;
        target -= x;
        
        if (target == 0) return n;
        
        int max_len = 0, cur_sum = 0, left = 0;
        
        for (int right = 0; right < n; ++right) {
            cur_sum += nums[right];
            while (left <= right && cur_sum > target) {
                cur_sum -= nums[left];
                left++;
            }
            if (cur_sum == target) {
                max_len = max(max_len, right - left + 1);
            }
        }
        
        return max_len ? n - max_len : -1;
        // sort(nums.begin(), nums.end());
        // if(nums[0]>x)
        //     return -1;
        // int i=0,j=0;
        // int sum=0;
        // while(j<nums.size()){
        //     sum+=nums[j];
        //     if(sum==x){
        //         return j-i+1;
        //     }
        //     while(sum>x){
        //         i++;
        //         sum-=nums[i];
        //     }
        //     j++;
        // }
        // return -1;
    }
};



// class Solution {
// public:
//     int minOperations(vector<int>& nums, int x) {
//         sort(nums.begin(), nums.end());
//         if(nums[0]>x)
//             return -1;
//         int i=0,j=nums.size();
//         int count=0,sum=0;
//         while(i<=j){
//             int mid=j-(i-j)/2;
//             if(nums[mid]>x)
//                 j=mid-1;
//             else if(nums[mid]=x)
//                 return 1;
//             else if(nums[mid]<x){
//                 if(nums[mid+1]>x){
//                     sum+=nums[mid];
//                     count++;
//                 }
//                 j=mid-1;
//             }
//             if(sum==x)
//                 return count;
//         }
//         return -1;
//     }
// };