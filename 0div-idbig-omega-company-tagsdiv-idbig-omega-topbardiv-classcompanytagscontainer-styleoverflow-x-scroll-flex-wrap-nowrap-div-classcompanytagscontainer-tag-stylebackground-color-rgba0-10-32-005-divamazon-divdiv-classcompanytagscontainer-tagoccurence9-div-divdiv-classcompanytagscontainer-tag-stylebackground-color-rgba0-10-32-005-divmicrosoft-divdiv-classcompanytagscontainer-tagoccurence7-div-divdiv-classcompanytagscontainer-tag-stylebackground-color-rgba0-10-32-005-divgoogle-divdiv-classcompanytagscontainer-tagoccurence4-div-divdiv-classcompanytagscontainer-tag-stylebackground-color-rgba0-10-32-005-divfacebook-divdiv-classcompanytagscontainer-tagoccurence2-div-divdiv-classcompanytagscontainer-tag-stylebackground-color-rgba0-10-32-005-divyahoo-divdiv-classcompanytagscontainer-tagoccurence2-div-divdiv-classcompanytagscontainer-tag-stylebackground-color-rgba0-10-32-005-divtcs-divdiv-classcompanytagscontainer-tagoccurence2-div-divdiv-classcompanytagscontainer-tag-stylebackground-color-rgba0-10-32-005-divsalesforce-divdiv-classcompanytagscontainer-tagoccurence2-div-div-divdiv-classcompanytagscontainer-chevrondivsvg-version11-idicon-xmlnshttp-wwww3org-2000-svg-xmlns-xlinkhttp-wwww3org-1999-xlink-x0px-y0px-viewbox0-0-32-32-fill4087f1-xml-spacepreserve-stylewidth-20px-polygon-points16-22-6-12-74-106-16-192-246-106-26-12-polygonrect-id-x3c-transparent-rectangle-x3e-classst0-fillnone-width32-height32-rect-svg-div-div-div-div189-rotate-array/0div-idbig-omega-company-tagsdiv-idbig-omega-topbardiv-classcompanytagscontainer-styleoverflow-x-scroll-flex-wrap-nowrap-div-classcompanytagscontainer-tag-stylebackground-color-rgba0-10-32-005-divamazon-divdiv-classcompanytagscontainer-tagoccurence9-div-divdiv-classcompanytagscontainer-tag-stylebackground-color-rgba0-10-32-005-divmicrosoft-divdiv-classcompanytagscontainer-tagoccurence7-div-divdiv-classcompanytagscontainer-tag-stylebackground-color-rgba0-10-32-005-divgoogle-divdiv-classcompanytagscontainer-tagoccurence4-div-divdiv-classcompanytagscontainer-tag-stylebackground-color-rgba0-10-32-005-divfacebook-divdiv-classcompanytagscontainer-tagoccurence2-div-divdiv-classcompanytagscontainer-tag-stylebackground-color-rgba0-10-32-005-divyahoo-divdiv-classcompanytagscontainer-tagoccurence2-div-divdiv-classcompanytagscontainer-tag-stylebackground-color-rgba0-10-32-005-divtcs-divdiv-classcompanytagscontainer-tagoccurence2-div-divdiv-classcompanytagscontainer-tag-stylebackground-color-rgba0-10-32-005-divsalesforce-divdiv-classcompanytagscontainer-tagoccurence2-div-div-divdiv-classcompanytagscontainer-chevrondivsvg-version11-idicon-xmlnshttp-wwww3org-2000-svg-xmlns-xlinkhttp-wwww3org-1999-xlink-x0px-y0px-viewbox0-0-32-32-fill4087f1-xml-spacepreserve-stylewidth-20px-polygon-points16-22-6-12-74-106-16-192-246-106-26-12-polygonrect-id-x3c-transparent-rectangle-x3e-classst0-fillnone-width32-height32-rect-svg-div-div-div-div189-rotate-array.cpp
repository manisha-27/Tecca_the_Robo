class Solution {
public:
    void rotate(vector<int>& nums){
        
    }
    void rotate(vector<int>& nums, int k) {
        vector<int> arr(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            // cout<<(i+k)%nums.size()<<endl;
            // arr.push_back(nums[(i+k)%nums.size()]);
            arr[(i+k)%nums.size()]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=arr[i];
        }
    }
};