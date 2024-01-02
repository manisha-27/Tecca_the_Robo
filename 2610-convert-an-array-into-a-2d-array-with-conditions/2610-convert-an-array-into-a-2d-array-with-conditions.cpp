class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int> arr;
        int maxi=1;
        for(auto n: nums){
            arr[n]++;
            maxi=max(maxi, arr[n]);
        }
        // int n=arr.size();
        vector<vector<int>> ans(maxi);
        for(auto a: arr){
            int n=a.second;
            while(n--){
                ans[n].push_back(a.first);
            }
        }
        return ans;
    }
};