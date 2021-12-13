class Solution {
    public int findNumbers(int[] nums) {
        int c=0,d=0;
        for(int i=0;i<nums.length;i++){
            for(;nums[i]!=0;nums[i]/=10,c++){
            }
            if(c%2==0){
                d+=1;
            }
            c=0;
        }
        return d;
    }
}
