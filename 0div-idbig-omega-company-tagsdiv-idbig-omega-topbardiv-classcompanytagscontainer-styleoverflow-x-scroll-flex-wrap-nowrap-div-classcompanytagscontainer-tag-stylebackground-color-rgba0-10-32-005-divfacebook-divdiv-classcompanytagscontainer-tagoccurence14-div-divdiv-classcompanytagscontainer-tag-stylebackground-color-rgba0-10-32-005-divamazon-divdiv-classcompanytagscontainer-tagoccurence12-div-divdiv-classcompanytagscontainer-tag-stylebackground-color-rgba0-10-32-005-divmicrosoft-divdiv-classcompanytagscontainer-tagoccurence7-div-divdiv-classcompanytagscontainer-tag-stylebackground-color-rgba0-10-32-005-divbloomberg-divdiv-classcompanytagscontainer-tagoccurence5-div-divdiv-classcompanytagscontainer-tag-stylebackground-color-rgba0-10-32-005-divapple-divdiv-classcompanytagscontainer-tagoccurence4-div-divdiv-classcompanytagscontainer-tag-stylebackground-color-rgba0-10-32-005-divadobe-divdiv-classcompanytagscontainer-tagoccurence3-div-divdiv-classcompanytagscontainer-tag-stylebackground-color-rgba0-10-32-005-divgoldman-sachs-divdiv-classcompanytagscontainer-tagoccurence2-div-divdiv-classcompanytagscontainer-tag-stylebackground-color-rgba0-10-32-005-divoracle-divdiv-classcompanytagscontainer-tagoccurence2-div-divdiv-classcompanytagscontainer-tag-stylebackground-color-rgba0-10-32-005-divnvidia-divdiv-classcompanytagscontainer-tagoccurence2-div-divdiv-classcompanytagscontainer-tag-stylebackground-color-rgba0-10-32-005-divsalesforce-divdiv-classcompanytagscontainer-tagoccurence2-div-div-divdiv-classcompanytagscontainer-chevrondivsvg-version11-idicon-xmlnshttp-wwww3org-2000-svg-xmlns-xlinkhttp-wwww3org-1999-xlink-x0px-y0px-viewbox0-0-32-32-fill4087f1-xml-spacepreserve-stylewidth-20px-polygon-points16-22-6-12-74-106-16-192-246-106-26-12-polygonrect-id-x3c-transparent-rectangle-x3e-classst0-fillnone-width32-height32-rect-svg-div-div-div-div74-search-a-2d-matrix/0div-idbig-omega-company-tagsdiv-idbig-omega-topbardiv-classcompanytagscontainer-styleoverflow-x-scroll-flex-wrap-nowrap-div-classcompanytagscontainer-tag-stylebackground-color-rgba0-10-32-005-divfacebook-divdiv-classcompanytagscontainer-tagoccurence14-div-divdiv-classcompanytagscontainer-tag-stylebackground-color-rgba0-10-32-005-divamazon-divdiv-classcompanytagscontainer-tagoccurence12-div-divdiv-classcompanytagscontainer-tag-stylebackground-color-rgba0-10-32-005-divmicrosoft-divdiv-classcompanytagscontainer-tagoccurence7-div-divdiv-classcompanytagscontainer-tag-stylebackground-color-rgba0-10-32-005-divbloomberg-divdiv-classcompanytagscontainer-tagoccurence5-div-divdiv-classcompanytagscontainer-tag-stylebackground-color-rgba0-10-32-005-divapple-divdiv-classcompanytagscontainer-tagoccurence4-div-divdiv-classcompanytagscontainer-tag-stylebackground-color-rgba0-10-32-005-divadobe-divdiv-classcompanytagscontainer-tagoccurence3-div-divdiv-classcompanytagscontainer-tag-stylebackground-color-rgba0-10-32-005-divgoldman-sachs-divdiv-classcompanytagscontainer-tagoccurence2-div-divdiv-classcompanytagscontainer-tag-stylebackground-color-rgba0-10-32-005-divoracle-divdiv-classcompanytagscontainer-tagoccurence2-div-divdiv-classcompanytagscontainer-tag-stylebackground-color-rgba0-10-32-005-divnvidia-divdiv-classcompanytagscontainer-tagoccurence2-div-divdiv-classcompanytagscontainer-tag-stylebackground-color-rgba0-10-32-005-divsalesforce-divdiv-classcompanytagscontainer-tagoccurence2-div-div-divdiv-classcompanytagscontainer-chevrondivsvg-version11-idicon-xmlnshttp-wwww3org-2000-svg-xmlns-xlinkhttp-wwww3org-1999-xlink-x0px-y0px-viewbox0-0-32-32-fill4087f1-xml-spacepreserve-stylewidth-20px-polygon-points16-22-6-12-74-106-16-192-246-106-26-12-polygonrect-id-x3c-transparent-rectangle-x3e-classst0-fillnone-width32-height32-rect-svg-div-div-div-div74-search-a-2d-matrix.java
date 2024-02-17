class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int row0=0,rown=matrix.length-1;
        int col0=0,coln=matrix[0].length-1;
        int mid=0;
        while(row0<rown){
            mid=row0+(rown-row0)/2;
            // System.out.println(mid+","+row0+","+rown);
            if(matrix[mid][coln]==target){
                return true;
            }else if(matrix[mid][coln]<target){
                row0=mid+1;
            }else{
                rown=mid;
            }
        }
        // System.out.println("====================");
        // System.out.println(mid+","+row0+","+rown);
        // rown=mid;
        while(col0<=coln){
            mid=col0+(coln-col0)/2;
            // System.out.println(mid+","+col0+","+coln);
            if(matrix[rown][mid]==target){
                return true;
            }else if(matrix[rown][mid]<target){
                col0=mid+1;
            }else{
                coln=mid-1;
            }
        }
        return false;
    }
}