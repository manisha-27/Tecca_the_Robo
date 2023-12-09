class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                pq.push(nums[i]);
        }
        int count=0;
        int sum=0;
        while(!pq.empty()){
            int a=pq.top()-sum;
            if(a!=0){
                sum+=a;
                count++;
            }
            pq.pop();
        }
        return count;
    }
};