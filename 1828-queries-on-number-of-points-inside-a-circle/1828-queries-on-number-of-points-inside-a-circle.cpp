class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int sum=0;
            for(int j=0;j<points.size();j++){
                int x=points[j][0];
                int y=points[j][1];
                double range=sqrt(pow(queries[i][0]-x,2)+pow(queries[i][1]-y,2));
                // cout<<queries[i][0]<<" "<<queries[i][1]<<" "<<x<<" "<<y<<" "<<range<<" "<<queries[i][2]<<endl;
                // 1 1 3 3 2 2
                if(range<=(double)queries[i][2]){
                    sum++;
                    // cout<<"pass"<<endl;
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};