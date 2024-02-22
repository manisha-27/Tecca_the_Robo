
class Solution {
    public void setZeroes(int[][] matrix) {
        Map<Integer, Integer> map1=new HashMap<>();
        Map<Integer, Integer> map2=new HashMap<>();
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                if(matrix[i][j]==0){
                    map1.put(i,j);
                    map2.put(j,i);
                }
            }
        }
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                if(map1.containsKey(i) || map2.containsKey(j))
                    matrix[i][j]=0;
            }
        }
    }
}