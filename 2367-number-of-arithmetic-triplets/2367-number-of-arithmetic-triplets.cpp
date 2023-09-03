class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        map<int,int> tri;
        for(int i=0;i<nums.size();i++){
            tri[nums[i]]=i;
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            int a=nums[i]+diff;
            int b=nums[i]+(2*diff);
            if(tri.find(a)!=tri.end() && tri.find(b)!=tri.end())
                count++;
        }
        return count;
    }
};