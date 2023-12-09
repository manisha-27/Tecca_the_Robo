class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]-1);
        }
        int a=pq.top();
        pq.pop();
        return a*pq.top();
    }
};