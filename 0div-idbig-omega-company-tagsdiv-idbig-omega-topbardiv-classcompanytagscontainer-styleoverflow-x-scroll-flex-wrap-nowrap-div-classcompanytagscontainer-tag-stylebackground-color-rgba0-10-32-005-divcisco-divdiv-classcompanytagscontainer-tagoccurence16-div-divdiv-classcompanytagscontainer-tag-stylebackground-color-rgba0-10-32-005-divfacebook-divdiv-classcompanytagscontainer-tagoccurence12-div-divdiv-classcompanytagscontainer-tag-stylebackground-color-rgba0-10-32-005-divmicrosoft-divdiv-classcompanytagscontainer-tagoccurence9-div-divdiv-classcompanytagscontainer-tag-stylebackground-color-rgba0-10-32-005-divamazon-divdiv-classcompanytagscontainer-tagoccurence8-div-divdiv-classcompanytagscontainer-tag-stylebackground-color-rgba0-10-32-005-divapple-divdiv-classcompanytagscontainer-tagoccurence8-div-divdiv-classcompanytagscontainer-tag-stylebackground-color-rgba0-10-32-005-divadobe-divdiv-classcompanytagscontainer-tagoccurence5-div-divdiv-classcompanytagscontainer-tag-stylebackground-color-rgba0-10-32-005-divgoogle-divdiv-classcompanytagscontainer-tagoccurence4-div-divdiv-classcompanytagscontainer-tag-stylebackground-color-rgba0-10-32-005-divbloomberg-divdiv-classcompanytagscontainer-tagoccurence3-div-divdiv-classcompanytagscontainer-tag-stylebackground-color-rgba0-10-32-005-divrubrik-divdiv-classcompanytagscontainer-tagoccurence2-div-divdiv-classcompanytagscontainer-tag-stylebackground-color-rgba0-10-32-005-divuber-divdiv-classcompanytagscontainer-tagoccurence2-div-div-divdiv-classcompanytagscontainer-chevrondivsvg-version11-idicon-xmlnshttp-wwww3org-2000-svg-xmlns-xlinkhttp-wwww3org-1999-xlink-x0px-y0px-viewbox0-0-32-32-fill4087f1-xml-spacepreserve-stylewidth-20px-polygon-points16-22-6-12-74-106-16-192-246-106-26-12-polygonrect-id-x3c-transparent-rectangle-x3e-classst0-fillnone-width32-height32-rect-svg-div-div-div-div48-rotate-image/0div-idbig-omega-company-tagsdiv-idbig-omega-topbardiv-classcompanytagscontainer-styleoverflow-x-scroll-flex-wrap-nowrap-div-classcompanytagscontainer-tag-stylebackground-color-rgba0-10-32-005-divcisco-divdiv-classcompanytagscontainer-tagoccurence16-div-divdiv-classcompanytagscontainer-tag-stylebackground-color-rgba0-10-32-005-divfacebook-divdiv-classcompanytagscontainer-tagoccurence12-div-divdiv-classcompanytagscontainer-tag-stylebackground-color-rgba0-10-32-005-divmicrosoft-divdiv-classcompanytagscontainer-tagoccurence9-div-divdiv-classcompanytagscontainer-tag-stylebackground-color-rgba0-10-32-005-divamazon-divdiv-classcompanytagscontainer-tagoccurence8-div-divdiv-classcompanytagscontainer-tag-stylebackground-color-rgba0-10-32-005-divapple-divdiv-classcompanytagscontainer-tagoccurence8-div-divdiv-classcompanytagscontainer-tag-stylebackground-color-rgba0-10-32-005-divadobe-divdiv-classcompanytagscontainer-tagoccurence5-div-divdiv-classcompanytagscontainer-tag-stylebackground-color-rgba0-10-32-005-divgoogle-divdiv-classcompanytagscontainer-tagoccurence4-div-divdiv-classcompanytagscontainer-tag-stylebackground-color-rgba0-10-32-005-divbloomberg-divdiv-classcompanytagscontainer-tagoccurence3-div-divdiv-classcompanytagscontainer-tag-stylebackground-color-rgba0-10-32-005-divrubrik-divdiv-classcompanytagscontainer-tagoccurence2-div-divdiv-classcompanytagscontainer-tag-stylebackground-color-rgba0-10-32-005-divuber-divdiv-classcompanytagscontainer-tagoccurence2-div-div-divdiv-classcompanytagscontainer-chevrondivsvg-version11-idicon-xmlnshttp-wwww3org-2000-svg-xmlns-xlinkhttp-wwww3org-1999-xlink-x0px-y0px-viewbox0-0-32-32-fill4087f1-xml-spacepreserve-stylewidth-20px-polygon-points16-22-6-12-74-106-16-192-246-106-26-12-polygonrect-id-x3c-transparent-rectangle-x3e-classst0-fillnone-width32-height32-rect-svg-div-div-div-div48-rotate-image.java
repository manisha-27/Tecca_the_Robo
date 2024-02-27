class Solution {
    public void rotate(int[][] matrix) {
        int row=matrix.length-1,i=0;
        while(i<row){
            int[] arr=matrix[i];
            // System.out.print(Arrays.toString(arr)+" , ");
            // System.out.print(Arrays.toString(matrix[i])+" , ");
            // System.out.println(Arrays.toString(matrix[row]));
            matrix[i]=matrix[row];
            matrix[row]=arr;
            // System.out.print(Arrays.toString(matrix[i])+" , ");
            // System.out.println(Arrays.toString(matrix[row]));
            // System.out.println(row+" "+i);
            row--;
            i++;
        }
        
        for(i=0;i<matrix.length-1;i++){
            for(int j=i+1;j<matrix[0].length;j++){
                // System.out.println(i+" - "+j);
                // System.out.println(matrix[i][j]+" "+matrix[j][i]);
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
                // System.out.println(matrix[i][j]+" "+matrix[j][i]);
                // System.out.println("=====");
            }
        }
    }
}