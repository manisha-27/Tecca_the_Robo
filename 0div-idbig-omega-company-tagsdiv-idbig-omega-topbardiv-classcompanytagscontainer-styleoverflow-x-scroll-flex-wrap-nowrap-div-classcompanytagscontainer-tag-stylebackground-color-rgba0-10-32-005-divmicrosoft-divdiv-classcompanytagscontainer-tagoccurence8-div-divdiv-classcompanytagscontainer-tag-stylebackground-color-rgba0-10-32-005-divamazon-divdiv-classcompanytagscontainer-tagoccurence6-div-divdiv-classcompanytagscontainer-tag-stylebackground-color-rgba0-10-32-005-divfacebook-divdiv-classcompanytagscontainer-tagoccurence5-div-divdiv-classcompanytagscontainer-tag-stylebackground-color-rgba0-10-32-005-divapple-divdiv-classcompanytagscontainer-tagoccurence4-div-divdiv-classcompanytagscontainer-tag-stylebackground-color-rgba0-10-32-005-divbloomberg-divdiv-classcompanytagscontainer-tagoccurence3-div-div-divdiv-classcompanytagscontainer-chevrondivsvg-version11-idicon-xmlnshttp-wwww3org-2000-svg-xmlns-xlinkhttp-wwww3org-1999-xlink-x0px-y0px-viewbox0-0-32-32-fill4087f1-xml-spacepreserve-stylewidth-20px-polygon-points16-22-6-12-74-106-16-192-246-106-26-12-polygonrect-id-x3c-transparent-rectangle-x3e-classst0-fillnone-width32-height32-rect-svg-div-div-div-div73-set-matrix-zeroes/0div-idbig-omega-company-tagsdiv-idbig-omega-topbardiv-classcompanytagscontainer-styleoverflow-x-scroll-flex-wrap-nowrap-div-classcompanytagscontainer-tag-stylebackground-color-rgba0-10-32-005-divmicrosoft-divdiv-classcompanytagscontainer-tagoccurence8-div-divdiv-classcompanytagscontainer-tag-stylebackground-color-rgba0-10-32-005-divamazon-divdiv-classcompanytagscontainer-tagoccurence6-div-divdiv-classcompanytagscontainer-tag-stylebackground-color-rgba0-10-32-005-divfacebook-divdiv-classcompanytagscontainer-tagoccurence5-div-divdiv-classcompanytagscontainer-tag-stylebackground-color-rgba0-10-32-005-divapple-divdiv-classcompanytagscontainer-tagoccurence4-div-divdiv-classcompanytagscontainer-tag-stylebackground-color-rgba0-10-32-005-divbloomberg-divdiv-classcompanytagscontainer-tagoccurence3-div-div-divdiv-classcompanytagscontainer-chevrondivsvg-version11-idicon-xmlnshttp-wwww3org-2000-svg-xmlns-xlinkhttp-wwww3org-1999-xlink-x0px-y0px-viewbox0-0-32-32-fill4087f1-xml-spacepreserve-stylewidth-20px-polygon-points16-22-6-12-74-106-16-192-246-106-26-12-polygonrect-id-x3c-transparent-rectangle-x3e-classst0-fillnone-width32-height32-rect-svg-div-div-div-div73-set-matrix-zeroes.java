
class Solution {
    public void setZeroes(int[][] matrix) {
        Set<Integer> map1=new HashSet<>();
        Set<Integer> map2=new HashSet<>();
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                if(matrix[i][j]==0){
                    map1.add(i);
                    map2.add(j);
                }
            }
        }
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                if(map1.contains(i) || map2.contains(j))
                    matrix[i][j]=0;
            }
        }
    }
}