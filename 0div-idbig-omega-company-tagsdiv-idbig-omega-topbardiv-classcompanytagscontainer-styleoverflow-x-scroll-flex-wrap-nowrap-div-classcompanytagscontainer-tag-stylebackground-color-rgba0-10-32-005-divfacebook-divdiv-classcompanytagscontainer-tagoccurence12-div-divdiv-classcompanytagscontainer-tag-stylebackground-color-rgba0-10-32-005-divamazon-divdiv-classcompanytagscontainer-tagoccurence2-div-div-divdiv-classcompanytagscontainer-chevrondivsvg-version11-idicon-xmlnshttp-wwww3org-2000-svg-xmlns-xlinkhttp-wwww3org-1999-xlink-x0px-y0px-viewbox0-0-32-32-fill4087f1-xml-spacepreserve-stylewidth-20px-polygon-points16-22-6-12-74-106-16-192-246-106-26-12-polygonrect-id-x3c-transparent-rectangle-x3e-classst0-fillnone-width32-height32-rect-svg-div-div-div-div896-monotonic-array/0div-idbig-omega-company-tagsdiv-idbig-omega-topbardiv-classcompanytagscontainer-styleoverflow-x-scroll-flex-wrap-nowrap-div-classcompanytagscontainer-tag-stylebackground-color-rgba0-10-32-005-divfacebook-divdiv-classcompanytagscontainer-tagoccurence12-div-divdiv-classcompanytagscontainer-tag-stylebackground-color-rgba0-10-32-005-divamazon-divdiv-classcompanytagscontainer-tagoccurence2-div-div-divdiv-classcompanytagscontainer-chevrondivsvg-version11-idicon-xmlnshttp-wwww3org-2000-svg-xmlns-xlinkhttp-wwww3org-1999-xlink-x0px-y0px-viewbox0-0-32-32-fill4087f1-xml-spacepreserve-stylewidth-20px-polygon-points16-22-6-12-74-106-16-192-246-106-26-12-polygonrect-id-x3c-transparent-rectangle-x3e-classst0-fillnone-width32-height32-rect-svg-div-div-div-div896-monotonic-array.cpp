// class Solution {
// public:
//     bool isMonotonic(vector<int>& nums) {
//         if(nums.size()<=1)
//             return true;
//         int a=nums[0]>nums[1]?1:2;
//         switch(a){
//             case 1: for(int i=1;i<nums.size();i++){
//                          if(nums[i]>nums[i-1])
//                              return false;
//                     }
//                 break;
//             case 2: for(int i=1;i<nums.size();i++){
//                          if(nums[i]<nums[i-1])
//                              return false;
//                     }
//                 break;
//         }
//         return true;
//     }
// };

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true;
        bool decreasing = true;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                decreasing = false;
            } else if (nums[i] < nums[i - 1]) {
                increasing = false;
            }

            // If neither increasing nor decreasing, it can be non-decreasing or non-increasing
        }

        return increasing || decreasing;
    }
};