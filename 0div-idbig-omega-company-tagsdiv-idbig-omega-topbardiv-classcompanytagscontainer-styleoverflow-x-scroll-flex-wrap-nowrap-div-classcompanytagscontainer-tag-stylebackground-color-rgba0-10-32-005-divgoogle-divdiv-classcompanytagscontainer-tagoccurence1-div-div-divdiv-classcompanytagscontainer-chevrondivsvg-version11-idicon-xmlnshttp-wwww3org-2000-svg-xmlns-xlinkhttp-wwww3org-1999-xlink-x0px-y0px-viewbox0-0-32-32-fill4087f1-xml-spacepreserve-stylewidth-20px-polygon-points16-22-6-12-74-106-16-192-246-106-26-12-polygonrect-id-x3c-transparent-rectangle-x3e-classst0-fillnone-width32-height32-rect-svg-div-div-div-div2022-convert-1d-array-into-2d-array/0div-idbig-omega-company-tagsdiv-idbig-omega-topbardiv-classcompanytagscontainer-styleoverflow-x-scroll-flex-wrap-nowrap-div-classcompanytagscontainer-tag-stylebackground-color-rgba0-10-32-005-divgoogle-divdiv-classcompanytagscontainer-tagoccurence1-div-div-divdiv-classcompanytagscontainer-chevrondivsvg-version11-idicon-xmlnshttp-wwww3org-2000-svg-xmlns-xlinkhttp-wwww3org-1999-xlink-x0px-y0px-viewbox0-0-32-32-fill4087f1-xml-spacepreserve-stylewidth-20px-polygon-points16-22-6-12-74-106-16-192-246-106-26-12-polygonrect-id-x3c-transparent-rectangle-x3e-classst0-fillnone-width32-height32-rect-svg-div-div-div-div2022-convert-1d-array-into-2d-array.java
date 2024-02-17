class Solution {
    public int[][] construct2DArray(int[] original, int m, int n) {
        if(original.length!=m*n) return new int[0][0];
        int[][] arr=new int[m][n];
        int i=0;
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                arr[j][k]=original[i];
                i++;
            }
        }
        return arr;
    }
}