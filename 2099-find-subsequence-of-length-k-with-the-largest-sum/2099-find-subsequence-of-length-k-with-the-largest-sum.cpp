class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
            if(pq.size()>k) pq.pop();
        }
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq1;
        while(!pq.empty()){
            pq1.push({pq.top().second, pq.top().first});
            pq.pop();
        }
        vector<int> ans;
        while(!pq1.empty()){
            ans.push_back(pq1.top().second);
            pq1.pop();
        }
        return ans;
    }
};