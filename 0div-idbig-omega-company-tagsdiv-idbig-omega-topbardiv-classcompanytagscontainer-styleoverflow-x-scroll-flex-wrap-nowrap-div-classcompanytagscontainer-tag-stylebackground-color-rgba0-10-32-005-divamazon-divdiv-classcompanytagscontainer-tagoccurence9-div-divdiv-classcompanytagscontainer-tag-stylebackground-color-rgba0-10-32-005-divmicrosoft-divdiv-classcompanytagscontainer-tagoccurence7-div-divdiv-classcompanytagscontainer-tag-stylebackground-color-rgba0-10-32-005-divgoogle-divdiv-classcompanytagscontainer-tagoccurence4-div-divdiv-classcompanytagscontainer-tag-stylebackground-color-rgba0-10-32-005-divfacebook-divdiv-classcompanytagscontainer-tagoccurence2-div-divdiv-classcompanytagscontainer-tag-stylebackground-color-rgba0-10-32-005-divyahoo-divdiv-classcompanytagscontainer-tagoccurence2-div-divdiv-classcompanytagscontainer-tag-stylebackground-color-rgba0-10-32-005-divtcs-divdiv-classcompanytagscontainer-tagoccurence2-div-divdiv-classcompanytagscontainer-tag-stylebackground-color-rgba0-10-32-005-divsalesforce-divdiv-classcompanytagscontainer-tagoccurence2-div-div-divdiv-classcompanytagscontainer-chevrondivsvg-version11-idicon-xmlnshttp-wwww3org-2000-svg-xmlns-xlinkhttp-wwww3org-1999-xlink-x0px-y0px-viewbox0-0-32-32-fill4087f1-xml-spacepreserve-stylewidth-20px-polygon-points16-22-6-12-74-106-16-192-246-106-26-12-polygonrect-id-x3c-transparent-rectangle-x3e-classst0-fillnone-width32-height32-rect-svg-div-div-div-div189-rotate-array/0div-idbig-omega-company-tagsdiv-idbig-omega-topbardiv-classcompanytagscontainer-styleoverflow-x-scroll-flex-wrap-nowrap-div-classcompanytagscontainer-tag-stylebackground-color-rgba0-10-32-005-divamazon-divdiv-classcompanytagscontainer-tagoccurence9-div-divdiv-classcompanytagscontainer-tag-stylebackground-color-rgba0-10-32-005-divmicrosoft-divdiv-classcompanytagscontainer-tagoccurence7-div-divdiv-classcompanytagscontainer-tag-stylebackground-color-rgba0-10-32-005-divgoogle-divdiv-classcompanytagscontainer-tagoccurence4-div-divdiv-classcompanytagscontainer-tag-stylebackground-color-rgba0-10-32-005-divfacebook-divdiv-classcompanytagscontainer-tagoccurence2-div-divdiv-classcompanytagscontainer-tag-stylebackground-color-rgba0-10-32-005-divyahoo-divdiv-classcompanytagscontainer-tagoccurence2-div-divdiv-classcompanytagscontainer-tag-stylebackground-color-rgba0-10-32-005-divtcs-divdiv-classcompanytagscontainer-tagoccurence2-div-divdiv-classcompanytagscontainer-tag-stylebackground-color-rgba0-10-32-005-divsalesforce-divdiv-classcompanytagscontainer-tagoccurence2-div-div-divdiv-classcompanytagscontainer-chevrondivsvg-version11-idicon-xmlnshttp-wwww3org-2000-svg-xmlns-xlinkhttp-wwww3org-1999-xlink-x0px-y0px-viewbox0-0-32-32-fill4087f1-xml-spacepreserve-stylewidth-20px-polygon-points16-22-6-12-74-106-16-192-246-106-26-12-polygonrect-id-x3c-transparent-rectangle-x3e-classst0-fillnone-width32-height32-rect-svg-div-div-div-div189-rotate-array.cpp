// 1 2 3 4 5
// 5 2 3 4 1
// 5 4 3 2 1


// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector<int> arr(nums.size(),0);
//         for(int i=0;i<nums.size();i++){
//             arr[(i+k)%nums.size()]=nums[i];
//         }
//         for(int i=0;i<nums.size();i++){
//             nums[i]=arr[i];
//         }
//     }
// };


class Solution {
public:
    void reverse(vector<int>& nums, int start, int end){
        while(start<=end){
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums,0,nums.size()-1);
        // if(k>nums.size())
        //     return;
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);
    }
};