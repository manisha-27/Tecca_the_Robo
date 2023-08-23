class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        left.push_back(0);
        right.push_back(0);
        int sum=0;
        for(int i=0;i<nums.size()-1;i++){
            sum+=nums[i];
            left.push_back(sum);
        }
        sum=0;
        for(int i=nums.size()-1;i>=1;i--){
            sum+=nums[i];
            right.push_back(sum);
        }
        reverse(right.begin(),right.end());
        for(int i=0;i<left.size();i++){
            left[i]=abs(left[i]-right[i]);
        }
        return left;
    }
};