// class Solution {
// public:
//     bool isValid(int i,int j,vector<vector<char>>& grid){
//         return i>=0 && j>=0 && i<grid.size() && j<grid[0].size();
//     }
//     void dfs(int i,int j,vector<vector<char>>& grid,vector<vector<int>>& vis){
//         vector<vector<int>> directions ={{-1,0},{1,0},{0,1},{0,-1}};
//         vis[i][j]=1;
//         for(auto dir: directions){
//             int ni=i+dir[0];
//             int nj=j+dir[1];
//             if(isValid(ni,nj,grid) && vis[ni][nj]==0){
//                 dfs(ni,nj,grid,vis);
//             }
//         }
//     }
//     int numIslands(vector<vector<char>>& grid) {
//         if (grid.empty() || grid[0].empty()) {
//             return 0;
//         }
//         // int vis[grid.size()][grid[0].size()]={0};  // 1=visited, 0=not visited
//         vector<vector<int>> vis(grid.size(), vector<int>(grid[0].size(), 0));
//         int countIslands=0;
//         for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid[i].size();j++){
//                 if(grid[i][j]=='1' && vis[i][j]==0){
//                     dfs(i,j,grid,vis);
//                     countIslands++;
//                 }
//             }
//         }
//         return countIslands;
//     }
// };
class Solution {
public:
    bool isValid(int i, int j, vector<vector<char>>& grid) {
        return i >= 0 && j >= 0 && i < grid.size() && j < grid[0].size() && grid[i][j] == '1';
    }

    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>& vis) {
        vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
        vis[i][j] = 1;
        for (auto dir : directions) {
            int ni = i + dir[0];
            int nj = j + dir[1];
            if (isValid(ni, nj, grid) && vis[ni][nj] == 0) {
                dfs(ni, nj, grid, vis);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty() || grid[0].empty()) {
            return 0;
        }

        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<int>> vis(rows, vector<int>(cols, 0));  // 1=visited, 0=not visited
        int countIslands = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == '1' && vis[i][j] == 0) {
                    dfs(i, j, grid, vis);
                    countIslands++;
                }
            }
        }

        return countIslands;
    }
};
