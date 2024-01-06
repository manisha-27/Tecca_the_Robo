// class Solution {
// public:
//     int job(int maxi, int i, vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
//         if(i==0 || endTime[i-1]<=startTime[i]) 
//             maxi=max(maxi+profit[i], job(maxi,i+1,startTime, endTime, profit));
//         return maxi;
//     }
//     int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
//         int i=0,maxi=0;
//         return job(maxi,i,startTime, endTime, profit);
//     }
// };

class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int numJobs = profit.size(); // Number of jobs
        vector<tuple<int, int, int>> jobs(numJobs);
      
        for (int i = 0; i < numJobs; ++i) {
            jobs[i] = {endTime[i], startTime[i], profit[i]};
        }
      
        sort(jobs.begin(), jobs.end());
        vector<int> dp(numJobs + 1);
      
        for (int i = 0; i < numJobs; ++i) {
            auto [endTime, startTime, profit] = jobs[i];
          
            int latestNonConflictJobIndex = upper_bound(jobs.begin(), jobs.begin() + i, startTime, [&](int time, const auto& job) -> bool {
                return time < get<0>(job);
            }) - jobs.begin();
          
            dp[i + 1] = max(dp[i], dp[latestNonConflictJobIndex] + profit);
        }
      
        return dp[numJobs];
    }
};