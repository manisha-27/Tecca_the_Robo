class Solution {
    public void moveZeroes(int[] nums) {
        int count=0;
        int j=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==0){
                count++;
                continue;
            }else{
                nums[j]=nums[i];
                j++;
            }
        }
        for(int i=(nums.length)-count;i<nums.length;i++){
            nums[i]=0;
        }
    }
}
