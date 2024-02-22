class Solution {
    public void nextPermutation(int[] nums) {
        for(int i=nums.length-1;i>0;i--){
            
            if(nums[i]<=nums[i-1]){
                if(i==1) Arrays.sort(nums);
                continue;
            }else{
                int min=Integer.MAX_VALUE;
                int mini=i-1;
                for(int j=i;j<nums.length;j++){
                    if(nums[j]>nums[i-1] && min>nums[j]){
                        min=nums[j];
                        mini=j;
                    }
                }
                int temp=nums[i-1];
                nums[i-1]=nums[mini];
                nums[mini]=temp;
                Arrays.sort(nums, i, nums.length);
                break;
            }
        }
    }
}