class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int c=0,d=0;
        int[] arr=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            if(nums[i]==1){
                c+=1;
            }
            if(nums[i]==0 || i==nums.length-1){
                arr[d]=c;
                c=0;
                d++;
            }
        }
        d=arr[0];
        for(int i=0;i<arr.length;i++){
            if(i>0 && arr[i]>d)
                d=arr[i];
        }
        return d;
        
    }
}
