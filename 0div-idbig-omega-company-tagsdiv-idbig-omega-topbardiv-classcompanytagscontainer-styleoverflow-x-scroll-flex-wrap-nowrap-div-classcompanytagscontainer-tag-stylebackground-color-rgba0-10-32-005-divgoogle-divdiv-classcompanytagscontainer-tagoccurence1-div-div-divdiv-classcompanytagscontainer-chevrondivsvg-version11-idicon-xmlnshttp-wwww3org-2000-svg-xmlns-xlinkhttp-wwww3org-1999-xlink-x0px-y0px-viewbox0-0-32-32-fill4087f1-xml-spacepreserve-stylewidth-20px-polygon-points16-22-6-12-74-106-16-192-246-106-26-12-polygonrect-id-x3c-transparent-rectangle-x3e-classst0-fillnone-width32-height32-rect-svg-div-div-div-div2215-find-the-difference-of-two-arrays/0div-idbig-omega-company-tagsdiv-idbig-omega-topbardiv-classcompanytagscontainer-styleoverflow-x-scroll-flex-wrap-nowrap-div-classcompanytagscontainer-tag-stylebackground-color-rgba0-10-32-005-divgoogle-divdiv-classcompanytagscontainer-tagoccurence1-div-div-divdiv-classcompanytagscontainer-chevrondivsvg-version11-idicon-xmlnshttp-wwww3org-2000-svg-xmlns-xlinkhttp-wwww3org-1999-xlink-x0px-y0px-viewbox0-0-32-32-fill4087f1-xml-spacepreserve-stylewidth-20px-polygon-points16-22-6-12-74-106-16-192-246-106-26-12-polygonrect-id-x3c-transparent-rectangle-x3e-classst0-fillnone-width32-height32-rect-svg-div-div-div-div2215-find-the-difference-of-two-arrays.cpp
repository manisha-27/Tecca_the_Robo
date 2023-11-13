class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,bool> s1;
        for(int i=0;i<nums2.size();i++){
            s1[nums2[i]]=false;
        }
        // vector<vector<int>> arr;
        unordered_set<int> arr1;
        for(int i=0;i<nums1.size();i++){
            if(s1.find(nums1[i])==s1.end()){
                arr1.insert(nums1[i]);
            }else{
                s1[nums1[i]]=true;
            }
        }
        // arr.push_back(arr1);
        unordered_set<int> arr2;
        for(auto a: s1){
            if(a.second==false) arr2.insert(a.first);
        }
        // arr.push_back(arr2);
        return {vector<int> (arr1.begin(), arr1.end()),vector<int> (arr2.begin(), arr2.end())};
    }
};