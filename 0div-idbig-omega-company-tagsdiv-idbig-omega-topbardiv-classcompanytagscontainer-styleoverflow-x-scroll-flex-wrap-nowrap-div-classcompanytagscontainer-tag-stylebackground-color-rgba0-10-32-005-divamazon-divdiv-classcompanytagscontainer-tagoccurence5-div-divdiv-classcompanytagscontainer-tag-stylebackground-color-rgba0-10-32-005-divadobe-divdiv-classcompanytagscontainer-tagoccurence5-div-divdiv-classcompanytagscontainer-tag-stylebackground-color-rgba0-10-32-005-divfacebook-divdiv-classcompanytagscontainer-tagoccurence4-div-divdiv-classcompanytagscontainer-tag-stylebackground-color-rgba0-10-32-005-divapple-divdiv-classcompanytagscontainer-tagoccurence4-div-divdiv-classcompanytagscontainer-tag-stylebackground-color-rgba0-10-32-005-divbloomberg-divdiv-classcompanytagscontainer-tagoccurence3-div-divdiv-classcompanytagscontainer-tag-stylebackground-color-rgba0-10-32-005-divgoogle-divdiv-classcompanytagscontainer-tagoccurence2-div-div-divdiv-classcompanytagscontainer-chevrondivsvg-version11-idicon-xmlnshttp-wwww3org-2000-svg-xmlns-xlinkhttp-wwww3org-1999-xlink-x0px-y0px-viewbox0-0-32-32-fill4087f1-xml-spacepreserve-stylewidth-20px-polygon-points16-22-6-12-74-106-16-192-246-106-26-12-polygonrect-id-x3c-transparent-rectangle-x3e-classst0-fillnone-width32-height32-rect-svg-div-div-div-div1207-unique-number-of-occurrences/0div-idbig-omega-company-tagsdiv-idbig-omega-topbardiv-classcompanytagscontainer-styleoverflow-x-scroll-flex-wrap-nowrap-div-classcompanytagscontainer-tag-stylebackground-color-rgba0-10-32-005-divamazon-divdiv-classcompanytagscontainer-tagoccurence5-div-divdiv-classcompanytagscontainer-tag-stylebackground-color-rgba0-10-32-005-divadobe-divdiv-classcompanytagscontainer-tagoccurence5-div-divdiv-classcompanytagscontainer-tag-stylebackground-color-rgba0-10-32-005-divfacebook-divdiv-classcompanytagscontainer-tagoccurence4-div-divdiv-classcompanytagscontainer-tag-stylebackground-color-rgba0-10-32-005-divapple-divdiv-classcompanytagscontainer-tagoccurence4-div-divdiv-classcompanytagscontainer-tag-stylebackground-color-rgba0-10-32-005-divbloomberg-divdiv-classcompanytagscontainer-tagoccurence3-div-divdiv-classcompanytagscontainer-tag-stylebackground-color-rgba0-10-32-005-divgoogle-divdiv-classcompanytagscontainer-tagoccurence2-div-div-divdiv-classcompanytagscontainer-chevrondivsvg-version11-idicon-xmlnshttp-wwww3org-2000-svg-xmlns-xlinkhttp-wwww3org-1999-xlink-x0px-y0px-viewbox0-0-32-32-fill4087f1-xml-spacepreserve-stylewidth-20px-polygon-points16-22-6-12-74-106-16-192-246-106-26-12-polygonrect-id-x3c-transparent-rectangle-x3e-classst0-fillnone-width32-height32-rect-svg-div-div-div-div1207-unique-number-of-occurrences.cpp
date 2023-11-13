class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> uq;
        set<int> occ;
        for(int i=0;i<arr.size();i++){
            uq[arr[i]]++;
        }
        for(auto a: uq)
            occ.insert(a.second);
        return uq.size()==occ.size();
    }
};