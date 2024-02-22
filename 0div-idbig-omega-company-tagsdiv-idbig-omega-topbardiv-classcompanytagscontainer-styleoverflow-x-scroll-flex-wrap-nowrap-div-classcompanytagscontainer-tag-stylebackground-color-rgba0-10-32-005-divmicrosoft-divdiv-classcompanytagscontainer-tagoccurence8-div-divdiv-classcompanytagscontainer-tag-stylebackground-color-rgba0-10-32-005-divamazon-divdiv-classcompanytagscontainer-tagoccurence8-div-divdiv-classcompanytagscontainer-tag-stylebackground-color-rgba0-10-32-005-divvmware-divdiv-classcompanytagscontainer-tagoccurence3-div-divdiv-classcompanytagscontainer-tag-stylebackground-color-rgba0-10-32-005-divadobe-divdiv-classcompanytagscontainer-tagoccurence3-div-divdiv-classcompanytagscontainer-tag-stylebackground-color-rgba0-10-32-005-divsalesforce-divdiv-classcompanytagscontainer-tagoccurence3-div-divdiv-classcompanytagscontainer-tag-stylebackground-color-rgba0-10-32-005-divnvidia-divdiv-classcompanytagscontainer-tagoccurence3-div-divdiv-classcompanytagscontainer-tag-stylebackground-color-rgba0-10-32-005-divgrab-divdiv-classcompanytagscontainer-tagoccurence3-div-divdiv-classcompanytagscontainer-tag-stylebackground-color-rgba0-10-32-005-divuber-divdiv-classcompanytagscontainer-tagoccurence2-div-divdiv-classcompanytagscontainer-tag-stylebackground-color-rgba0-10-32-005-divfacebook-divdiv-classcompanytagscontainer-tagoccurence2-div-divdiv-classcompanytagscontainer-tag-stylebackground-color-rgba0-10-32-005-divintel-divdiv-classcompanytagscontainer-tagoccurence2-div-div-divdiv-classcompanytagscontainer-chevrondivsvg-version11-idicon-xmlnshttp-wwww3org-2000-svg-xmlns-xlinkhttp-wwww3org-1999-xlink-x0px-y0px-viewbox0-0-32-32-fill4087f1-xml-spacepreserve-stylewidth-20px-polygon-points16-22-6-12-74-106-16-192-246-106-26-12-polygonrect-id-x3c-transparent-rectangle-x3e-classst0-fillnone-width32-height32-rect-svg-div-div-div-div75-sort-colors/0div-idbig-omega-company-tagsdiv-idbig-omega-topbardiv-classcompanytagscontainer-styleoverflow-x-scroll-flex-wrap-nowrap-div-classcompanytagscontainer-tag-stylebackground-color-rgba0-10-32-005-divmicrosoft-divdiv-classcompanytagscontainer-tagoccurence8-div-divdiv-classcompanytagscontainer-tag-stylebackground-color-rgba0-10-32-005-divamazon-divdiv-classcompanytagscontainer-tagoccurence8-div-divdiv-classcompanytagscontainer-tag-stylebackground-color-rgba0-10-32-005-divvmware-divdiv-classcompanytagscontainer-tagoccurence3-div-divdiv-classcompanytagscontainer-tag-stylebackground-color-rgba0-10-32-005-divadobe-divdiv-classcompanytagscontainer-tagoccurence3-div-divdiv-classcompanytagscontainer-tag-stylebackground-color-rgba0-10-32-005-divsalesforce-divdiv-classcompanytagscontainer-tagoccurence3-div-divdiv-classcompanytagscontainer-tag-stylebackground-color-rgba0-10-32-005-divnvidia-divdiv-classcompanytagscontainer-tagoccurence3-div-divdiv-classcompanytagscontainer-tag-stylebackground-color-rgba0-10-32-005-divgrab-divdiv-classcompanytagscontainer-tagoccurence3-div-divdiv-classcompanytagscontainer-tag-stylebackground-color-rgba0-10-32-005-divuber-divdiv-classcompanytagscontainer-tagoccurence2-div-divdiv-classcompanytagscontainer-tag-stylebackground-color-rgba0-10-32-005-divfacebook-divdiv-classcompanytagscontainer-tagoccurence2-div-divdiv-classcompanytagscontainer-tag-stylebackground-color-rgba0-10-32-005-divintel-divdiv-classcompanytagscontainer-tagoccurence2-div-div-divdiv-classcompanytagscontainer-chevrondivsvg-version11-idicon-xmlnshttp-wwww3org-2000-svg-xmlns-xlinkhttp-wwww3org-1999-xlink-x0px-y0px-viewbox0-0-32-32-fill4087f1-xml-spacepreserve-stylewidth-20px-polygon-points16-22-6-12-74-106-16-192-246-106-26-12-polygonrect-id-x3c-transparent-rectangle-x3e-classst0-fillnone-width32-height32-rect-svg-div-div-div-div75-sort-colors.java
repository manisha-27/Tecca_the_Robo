class Solution {
    public void sortColors(int[] nums) {
        for(int i=0;i<nums.length;i++){
            int min=Integer.MAX_VALUE, mini=i;
            for(int j=i+1;j<nums.length;j++){
                if(min>nums[j]){
                    min=nums[j];
                    mini=j;
                }
            }
            if(nums[i]>min){
                int temp=nums[i];
                nums[i]=nums[mini];
                nums[mini]=temp;
            }
        }
    }
}