class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                pq.push(nums[i]);
        }
        int count=0;
        while(!pq.empty()){
            int a=pq.top();
            pq.pop();
            vector<int> arr;
            while(!pq.empty()){
                if(pq.top()-a>0) arr.push_back(pq.top()-a);
                pq.pop();
            }
            for (int x : arr) {
                pq.push(x);
            }
            count++;
        }
        return count;
    }
};