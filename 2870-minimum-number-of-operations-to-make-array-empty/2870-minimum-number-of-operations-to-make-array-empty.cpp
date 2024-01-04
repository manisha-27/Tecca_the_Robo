class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> arr;
        for(auto a: nums){
            arr[a]++;
        }
        int count=0;
        for(auto a: arr){
            int b=a.second;
            if(b==1)
                return -1;
            count+=(b%3==0?b/3:(b/3)+1);
        }
        return count;
    }
};