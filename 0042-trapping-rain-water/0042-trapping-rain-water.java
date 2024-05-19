class Solution {
    public int trap(int[] arr) {
        int n=arr.length;
        int[] left=new int[n];
        int[] right=new int[n];
        left[0]=0;
        right[n-1]=0;
        int sum=0;
        for(int i=n-2;i>=0;i--){
            right[i]=Math.max(arr[i+1],right[i+1]);
        }
        for(int i=1;i<n;i++){
            left[i]=Math.max(arr[i-1],left[i-1]);
            sum+=(Math.max(Math.min(left[i],right[i])-arr[i],0));
        }
        // System.out.println(Arrays.toString(left));
        // System.out.println(Arrays.toString(right));
        return sum;
    }
}