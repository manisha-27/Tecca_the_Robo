// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int low=0,high=matrix.size()-1;
//         int col=high;
//         int mid;
//         while(low<=high){
//             mid = low + (high - low) / 2;
//             if (matrix[mid][col]==target)
//                 return true;
//             else if(matrix[mid][col]<target){
//                 low=mid+1;
//             }else if(matrix[mid][col]>target){
//                 high=mid-1;
//             }
//         }
//         int y=high;
//         low=0;high=matrix[0].size()-2;
//         while(low<=high){
//             mid = low + (high - low) / 2;
//             if (matrix[y][mid]==target)
//                 return true;
//             else if (matrix[y][mid]<target){
//                 low=mid+1;
//             }else if(matrix[y][mid]>target){
//                 high=mid-1;
//             }
//         }
//         return false;
//     }
// };

// class Solution {
// public:
//     bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
//         int m = matrix.size();
//         int n = matrix[0].size();

//         // Binary search in the first column to find the potential row
//         int low = 0, high = m - 1;
//         while (low <= high) {
//             int mid = low + (high - low) / 2;
//             if (matrix[mid][0] == target) {
//                 return true;
//             } else if (matrix[mid][0] < target) {
//                 low = mid + 1;
//             } else {
//                 high = mid - 1;
//             }
//         }

//         int potentialRow = high;

//         // Binary search in the potentialRow for the target
//         low = 0;
//         high = n - 1;
//         while (low <= high) {
//             int mid = low + (high - low) / 2;
//             if (matrix[potentialRow][mid] == target) {
//                 return true;
//             } else if (matrix[potentialRow][mid] < target) {
//                 low = mid + 1;
//             } else {
//                 high = mid - 1;
//             }
//         }

//         return false;
//     }
// };


#include <vector>

class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        if (m == 0 || n == 0) {
            return false;  // Check for empty matrix
        }

        // Binary search in the first column to find the potential row
        int low = 0, high = m - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (matrix[mid][0] == target) {
                return true;
            } else if (matrix[mid][0] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if (high < 0) {
            return false;  // Check for out-of-bounds access
        }

        int potentialRow = high;

        // Binary search in the potentialRow for the target
        low = 0;
        high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (matrix[potentialRow][mid] == target) {
                return true;
            } else if (matrix[potentialRow][mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return false;
    }
};
