class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
         int count = 0, i = 0, j = 0;
        for (const auto& row : bank) {
            int setBits = std::count(row.begin(), row.end(), '1');
            if (setBits != 0) {
                j=setBits;
                count += (j * i);
                i = setBits;
            }
        }
        return count;
    }
};