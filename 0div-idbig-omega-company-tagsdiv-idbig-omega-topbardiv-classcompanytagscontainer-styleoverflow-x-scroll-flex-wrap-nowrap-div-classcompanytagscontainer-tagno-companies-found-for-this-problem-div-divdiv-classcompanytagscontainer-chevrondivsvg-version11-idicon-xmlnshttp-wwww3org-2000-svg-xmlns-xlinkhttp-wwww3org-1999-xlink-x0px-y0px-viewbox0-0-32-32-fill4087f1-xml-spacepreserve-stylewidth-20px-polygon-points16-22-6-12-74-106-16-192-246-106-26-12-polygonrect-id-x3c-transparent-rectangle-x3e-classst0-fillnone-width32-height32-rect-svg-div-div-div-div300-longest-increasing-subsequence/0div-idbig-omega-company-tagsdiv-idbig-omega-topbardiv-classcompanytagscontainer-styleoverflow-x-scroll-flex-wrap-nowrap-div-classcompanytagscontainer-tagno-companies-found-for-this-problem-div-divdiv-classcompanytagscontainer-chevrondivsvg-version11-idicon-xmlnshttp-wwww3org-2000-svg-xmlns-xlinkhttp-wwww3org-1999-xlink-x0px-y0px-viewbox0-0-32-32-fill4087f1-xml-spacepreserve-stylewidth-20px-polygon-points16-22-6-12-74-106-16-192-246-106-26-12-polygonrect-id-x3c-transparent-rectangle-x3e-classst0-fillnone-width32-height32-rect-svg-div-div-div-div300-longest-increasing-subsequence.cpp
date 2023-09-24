// class Solution {
// public:
//     void generate(vector<int>& nums, vector<vector<int>>& seq, vector<int>& arr, int i){
//         if(i>=nums.size()){
//             seq.push_back(arr);
//             return;
//         }
//         arr.push_back(nums[i]);
//         generate(nums,seq,arr,i+1);
//         arr.pop_back();
//         generate(nums,seq,arr,i+1);
//     }
//     int maxSeq(vector<vector<int>>& seq){
//         int maxi=0;
//         for(int i=0;i<seq.size();i++){
//             int count=1;
//             if(seq[i].size()==1){
//                 maxi=max(maxi,1);
//                 continue;
//             }
//             // for(int j=0;j<seq[i].size();j++){
//             //     cout<<seq[i][j]<<" ";
//             // }
//             // cout<<endl;
//             int j=0,k=1;
//             while(k<seq[i].size()){
//                 // cout<<seq[i][j]<<" "<<seq[i][k]<<" * "<<endl;
//                 if(seq[i][j]<seq[i][k]){
//                     // cout<<seq[i][j]<<" "<<seq[i][k]<<endl;
//                     j++;
//                     k++;
//                     count++;
//                     maxi=max(maxi,count);
//                 }else{
//                     break;
//                 }
//             }
//             // cout<<"------"<<endl;
//         }
//         return maxi;
//     }
//     int lengthOfLIS(vector<int>& nums) {
//         vector<vector<int>> seq;
//         vector<int> arr;
//         generate(nums,seq,arr,0);
//         return maxSeq(seq);
//     }
// };

class Solution {
public:
    int maxSeq(vector<int>& nums, int index, int prev_idx, vector<vector<int>>& dp){
        int len=0;
        if(index>=nums.size())
            return len;
        // Exclude
        if(dp[index][prev_idx+1]!=-1)
            return dp[index][prev_idx+1];
        len=0+maxSeq(nums,index+1,prev_idx,dp);
        if(prev_idx==-1 || nums[index]>nums[prev_idx]){
            len=max(len,1+maxSeq(nums,index+1,index,dp));
        }
        return dp[index][prev_idx+1]=len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        int index=0,prev_idx=-1;
        return maxSeq(nums,index,prev_idx, dp);
    }
};