class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=0;
        for(int i=0;i<candies.size();i++){
            maxi=max(maxi,candies[i]);
        }
        vector<bool> great;
        for(int i=0;i<candies.size();i++){
            int a=candies[i]+extraCandies;
            if(a>=maxi)
                great.push_back(true);
            else
                great.push_back(false);
        }
        return great;
    }
};