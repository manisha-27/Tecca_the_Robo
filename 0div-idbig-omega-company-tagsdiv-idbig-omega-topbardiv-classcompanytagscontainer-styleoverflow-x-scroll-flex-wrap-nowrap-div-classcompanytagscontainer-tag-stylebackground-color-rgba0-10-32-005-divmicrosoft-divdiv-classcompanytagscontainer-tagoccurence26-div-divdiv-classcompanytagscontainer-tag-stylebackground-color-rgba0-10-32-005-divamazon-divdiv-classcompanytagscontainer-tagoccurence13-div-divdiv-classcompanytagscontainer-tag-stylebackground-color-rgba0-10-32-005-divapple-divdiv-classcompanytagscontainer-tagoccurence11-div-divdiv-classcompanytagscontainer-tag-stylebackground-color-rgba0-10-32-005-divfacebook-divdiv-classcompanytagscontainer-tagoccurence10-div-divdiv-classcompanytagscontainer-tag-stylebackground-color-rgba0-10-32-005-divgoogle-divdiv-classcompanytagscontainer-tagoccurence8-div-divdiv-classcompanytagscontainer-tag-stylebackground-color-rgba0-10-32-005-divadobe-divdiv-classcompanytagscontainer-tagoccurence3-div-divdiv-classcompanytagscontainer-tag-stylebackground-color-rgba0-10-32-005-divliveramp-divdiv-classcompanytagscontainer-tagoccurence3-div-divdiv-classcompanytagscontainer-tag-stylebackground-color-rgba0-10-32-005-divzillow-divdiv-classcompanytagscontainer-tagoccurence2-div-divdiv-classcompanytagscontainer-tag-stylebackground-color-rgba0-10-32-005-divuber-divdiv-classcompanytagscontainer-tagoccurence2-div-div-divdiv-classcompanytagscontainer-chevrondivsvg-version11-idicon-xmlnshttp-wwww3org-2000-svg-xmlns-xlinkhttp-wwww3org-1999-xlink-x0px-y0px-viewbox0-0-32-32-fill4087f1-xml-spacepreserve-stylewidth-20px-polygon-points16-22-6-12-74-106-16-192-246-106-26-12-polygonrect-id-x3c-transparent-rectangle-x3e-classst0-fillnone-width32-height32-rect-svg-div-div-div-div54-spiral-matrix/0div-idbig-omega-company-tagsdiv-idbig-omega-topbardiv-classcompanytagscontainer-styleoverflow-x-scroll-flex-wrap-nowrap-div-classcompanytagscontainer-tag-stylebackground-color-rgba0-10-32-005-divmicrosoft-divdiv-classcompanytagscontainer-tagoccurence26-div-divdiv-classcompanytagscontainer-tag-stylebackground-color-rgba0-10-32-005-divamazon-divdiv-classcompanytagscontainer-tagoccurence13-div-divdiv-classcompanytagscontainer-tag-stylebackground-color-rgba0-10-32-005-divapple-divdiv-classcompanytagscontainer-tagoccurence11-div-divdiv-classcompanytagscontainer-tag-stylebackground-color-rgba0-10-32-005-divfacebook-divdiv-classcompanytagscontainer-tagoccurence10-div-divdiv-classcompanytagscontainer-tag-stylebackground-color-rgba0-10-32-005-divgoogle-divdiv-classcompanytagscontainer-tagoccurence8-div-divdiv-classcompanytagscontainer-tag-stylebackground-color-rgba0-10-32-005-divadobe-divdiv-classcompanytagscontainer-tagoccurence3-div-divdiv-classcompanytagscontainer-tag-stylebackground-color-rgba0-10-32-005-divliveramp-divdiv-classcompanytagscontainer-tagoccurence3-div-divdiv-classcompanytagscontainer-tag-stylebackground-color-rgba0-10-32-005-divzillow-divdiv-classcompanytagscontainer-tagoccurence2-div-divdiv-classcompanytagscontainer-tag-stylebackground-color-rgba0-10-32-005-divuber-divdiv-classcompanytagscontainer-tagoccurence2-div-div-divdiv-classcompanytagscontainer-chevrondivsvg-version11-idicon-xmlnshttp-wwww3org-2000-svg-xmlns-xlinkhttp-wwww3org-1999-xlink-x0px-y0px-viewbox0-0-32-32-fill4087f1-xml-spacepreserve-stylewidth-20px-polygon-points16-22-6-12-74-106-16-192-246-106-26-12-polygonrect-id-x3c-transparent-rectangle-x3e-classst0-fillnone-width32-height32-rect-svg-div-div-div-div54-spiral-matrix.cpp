class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int top=0, bottom=row-1;
        int left=0, right=col-1;
        vector<int> arr;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                arr.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                arr.push_back(matrix[i][right]);
            }
            right--;
            // for(int i=right;i>=left;i--){
            //     arr.push_back(matrix[bottom][i]);
            // }
            // bottom--;
            // for(int i=bottom;i>=top;i--){
            //     arr.push_back(matrix[i][left]);
            // }
            // left++;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    arr.push_back(matrix[bottom][i]);
                }
                bottom--;   
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    arr.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return arr;
    }
};