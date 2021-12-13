import java.util.*;
class Solution {
    public int[] sortedSquares(int[] nums) {
        for(int i=0;i<nums.length;i++){
            // nums[i]=Math.pow(nums[i], 2);
            nums[i]=nums[i]*nums[i];
        }
        Arrays.sort(nums);
//         OR
//         for(int i=0;i<nums.length;i++){
//                 for(int j=0;j<nums.length;j++){
//                     if(nums[j]>nums[i]){
//                      int temp;
//                 temp=nums[i];
//                 nums[i]=nums[j];
//                 nums[j]=temp;   
//                     }
//               }
//         }
        return nums;
    }
}
