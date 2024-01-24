class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        // vector<vector<int>> b(m,vector<int>(n,2));
        vector<vector<int>> b;
        int count=0;
        if(m*n!=original.size())
            return {};
        for(int i=0;i<m;i++){
            vector<int> a;
            for(int j=0;j<n;j++){
                a.push_back(original[count]);
                count++;
            }
            b.push_back(a);
        }
        return b;
    }
};

// class Solution {
// public:
//     vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
//         vector<vector<int>> b;
//         int count=0;
//         if(m*n != original.size())
//         {
//             return {};
//         }
//         for(int i=0;i<m;i++){
//             vector<int> temp;
//             for(int j=0;j<n;j++){
                
//                 temp.push_back(original[count]);
//                 count++;
                
//             }
//             b.push_back(temp);
//         }
//         return b;
//     }
// };