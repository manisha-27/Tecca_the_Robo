class Solution {
public:
    vector<int> mergeSort(vector<int>& nums, int i, int j){
        if(i>=j) return {nums[i]};
        int mid=(i+j)/2;
        vector<int> left=mergeSort(nums, i, mid);
        vector<int> right=mergeSort(nums, mid+1,j);
        return merge(left,right);
    }
    vector<int> merge(vector<int>& nums1, vector<int>& nums2){
        vector<int> arr;
        int i=0,m=0,mid=nums1.size(), j=nums2.size();
        while(i<mid && m<j){
            if(nums1[i]<=nums2[m]){
                arr.push_back(nums1[i]);
                i++;
            }else if(nums1[i]>nums2[m]){
                arr.push_back(nums2[m]);
                m++;
            }
        }
        while(i<mid){
            arr.push_back(nums1[i]);
            i++;
        }
        while(m<j){
            arr.push_back(nums2[m]);
            m++;
        }
        return arr;
    }
    // vector<int> merge(vector<int>& nums, int i, int j, int mid){
    //     cout<<"hello"<<endl;
    //     vector<int> arr;
    //     int p=0; int m=mid+1; 
    //     while(i<=mid && m<=j){
    //         if(nums[i]<=nums[m]){
    //             arr.push_back(nums[i]);
    //             i++;
    //         }else if(nums[i]>nums[m]){
    //             arr.push_back(nums[m]);
    //             m++;
    //         }
    //     }
    //     while(i<=mid){
    //         arr.push_back(nums[i]);
    //         i++;
    //     }
    //     while(m<=j){
    //         arr.push_back(nums[m]);
    //         m++;
    //     }
    //     return arr;
    // }
    void sortColors(vector<int>& nums) {
        nums=mergeSort(nums,0,nums.size()-1);
        return;
    }
};