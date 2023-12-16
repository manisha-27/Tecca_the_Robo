class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> ord;
        for(auto a: nums){
            ord[a]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minheap;
        for(auto a: ord){
            minheap.push({a.second,a.first});
            if(minheap.size()>k)
                minheap.pop();
        }
        vector<int> arr;
        while(!minheap.empty()){
            arr.push_back(minheap.top().second);
            minheap.pop();
        }
        return arr;
    }
};