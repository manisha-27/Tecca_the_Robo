class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int fast=0,slow=0;
        do{
            fast=arr[arr[fast]];
            slow=arr[slow];
        }while(fast!=slow);
        slow=0;
        while(fast!=slow){
            fast=arr[fast];
            slow=arr[slow];
        }
        // cout<<slow<<endl;
        return slow;
    }
};
