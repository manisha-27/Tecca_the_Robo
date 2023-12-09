class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int sum=0;
        vector<priority_queue<int>> pq;
        for(int i=0;i<grid.size();i++){
            priority_queue<int> num;
            for(int j=0;j<grid[0].size();j++){
                num.push(grid[i][j]);
            }
            pq.push_back(num);
        }
        for(int i=0;i<grid[0].size();i++){
            priority_queue<int> num;
            for(int j=0;j<pq.size();j++){
                num.push(pq[j].top());
                // cout<<pq[j].top()<<" ";
                pq[j].pop();
            }
            // cout<<endl;
            sum+=num.top();
            num.pop();
        }
        return sum;
    }
};