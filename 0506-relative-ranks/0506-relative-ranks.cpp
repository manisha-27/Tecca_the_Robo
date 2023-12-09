class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        int i=0;
        for(auto a: score){
            pq.push({a,i});
            i++;
        }
        int count=1;
        vector<string> ans(score.size());
        while(!pq.empty()){
            if(count==1)
                ans[pq.top().second]="Gold Medal";
            else if(count==2)
                ans[pq.top().second]="Silver Medal";
            else if(count==3)
                ans[pq.top().second]="Bronze Medal";
            else
                ans[pq.top().second]=to_string(count);
            pq.pop();
            count++;
        }
        return ans;
    }
};