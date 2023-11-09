class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=0;
        int sum=0;
        double avg=0.0,maxi=INT_MIN;
        while(j<nums.size()){
            // if(j-i+1!=4){
                // sum+=nums[j];
                // j++;
            // }else
            sum+=nums[j];
             if(j-i+1==k){
                avg=sum/(double)k;
                 // cout<<(double)avg<<" - "<<sum<<" - "<<i<<" - "<<j<<endl;
                maxi=max(maxi,avg);
                sum-=nums[i];
                i++;
                // sum+=nums[j];
                // j++;
            }
            // cout<<" sum-> "<<sum<<endl;
            j++;
        }
        return maxi;
    }
};