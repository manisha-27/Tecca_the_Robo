class Solution {
    public int findNumbers(int[] nums) {
        int count=0;
        for(int i=0;i<nums.length;i++){
            if(digit(nums[i]))
                count++;
        }
        return count;
    }
    public static boolean digit(int num){
        int count=0;
        while(num>0){
            count++;
            num/=10;
            // System.out.println(num);
        }
        return (count%2==0)?true:false;
    }
}

// iterate each element of an array
// check if the element has even diigits or odd dgits
// iterate a loop and divide the no. by 10 until no.<0 and count++
// return and count all the even digits integer
// return it to main funcction
