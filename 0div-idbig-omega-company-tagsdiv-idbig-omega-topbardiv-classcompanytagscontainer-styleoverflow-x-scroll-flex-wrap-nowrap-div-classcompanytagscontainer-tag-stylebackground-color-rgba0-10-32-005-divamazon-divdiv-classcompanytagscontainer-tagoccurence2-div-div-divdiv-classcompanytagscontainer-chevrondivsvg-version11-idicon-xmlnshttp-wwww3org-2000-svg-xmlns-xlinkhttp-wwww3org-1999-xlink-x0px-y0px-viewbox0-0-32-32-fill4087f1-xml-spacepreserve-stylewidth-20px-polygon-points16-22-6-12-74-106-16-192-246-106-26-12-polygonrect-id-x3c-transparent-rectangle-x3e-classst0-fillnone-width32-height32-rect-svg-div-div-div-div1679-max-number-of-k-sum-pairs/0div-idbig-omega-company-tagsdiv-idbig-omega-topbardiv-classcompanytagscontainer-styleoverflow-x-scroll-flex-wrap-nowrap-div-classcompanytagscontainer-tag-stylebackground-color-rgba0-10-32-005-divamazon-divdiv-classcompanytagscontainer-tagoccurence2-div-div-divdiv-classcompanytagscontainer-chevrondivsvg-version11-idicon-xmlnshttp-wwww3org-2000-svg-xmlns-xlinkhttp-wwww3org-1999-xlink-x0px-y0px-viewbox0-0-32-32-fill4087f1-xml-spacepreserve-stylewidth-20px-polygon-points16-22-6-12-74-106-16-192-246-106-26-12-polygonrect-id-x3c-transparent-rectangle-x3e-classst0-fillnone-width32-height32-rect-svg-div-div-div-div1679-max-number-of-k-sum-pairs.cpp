class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int> pair;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(pair.find(k-nums[i])!=pair.end() && pair[k-nums[i]]>0){
                cout<<nums[i]<<" "<<k-nums[i]<<endl;
                pair[k-nums[i]]--;
                pair[nums[i]]--;
                count++;
            }
            pair[nums[i]]++;
        }
        return count;
    }
};