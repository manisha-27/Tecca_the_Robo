class Solution {
    public void setZeroes(int[][] matrix) {
        // boolean[][] arr=new boolean[matrix.length][matrix[0].length];
//       False=0 True=1
        // Arrays.fill(arr, Boolean.FALSE);
        int a=0;
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                if(matrix[i][j]==0)
                    a++;
            }
        }
        if(a>0){
        for(int i=0;i<matrix.length;i++){
            int n=matrix[0].length;
            for(int j=0;j<matrix[0].length;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<matrix[0].length;k++){
                        if(matrix[i][k]!=0)
                        matrix[i][k]=-1;
                    }
                    for(int k=0;k<matrix.length;k++){
                        if(matrix[k][j]!=0)
                        matrix[k][j]=-1;
                    }
                }
            }
        }
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                if(matrix[i][j]==-1)
                    matrix[i][j]=0;
            }
          }
       }
    }
}
