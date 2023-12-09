class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>> pq;
        int i=0;
        for(auto a: mat){
            int sol=0;
            for(auto b: a){
                if(b==1)
                    sol++;
            }
            pq.push({sol,i});
            if(pq.size()>k)
                pq.pop();
            i++;
        }
        vector<int> ans(k);
        for(i=k-1;i>=0;i--){
            ans[i]=pq.top().second;
            pq.pop();
        }
        return ans;
    }
};