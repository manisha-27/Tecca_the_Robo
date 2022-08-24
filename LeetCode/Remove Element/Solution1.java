class Solution {
    public int removeElement(int[] nums, int val) {
        int left=0, right=nums.length-1;
        while(left<=right){
            if(nums[left]==val && nums[right]!=val){
                int temp;
                temp=nums[left];
                nums[left]=nums[right];
                nums[right]=temp;
                left++;
                right--;
            }else if(nums[left]==val && nums[right]==val){
                right--;
            }else{
                left++;
            }
        }
        return right +1;
    }
}
