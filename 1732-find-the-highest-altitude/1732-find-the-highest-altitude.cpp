class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest=max(gain[0],0);
        for(int i=1;i<gain.size();i++){
            highest=max(highest, gain[i]+gain[i-1]);
            gain[i]+=gain[i-1];
        }
        return highest;
    }
};