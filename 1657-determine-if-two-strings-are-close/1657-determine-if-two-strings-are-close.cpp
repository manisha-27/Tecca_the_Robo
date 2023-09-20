class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())
            return false;
        map<char, int> w1;
        map<char, int> w2;
        for(int i=0;i<word1.length();i++){
            w1[word1[i]]+=1;
            w2[word2[i]]+=1;
        }
        if(w1.size()!=w2.size())
            return false;
        for (const auto& pair : w1) {
            if (w2.find(pair.first) == w2.end())
                return false;
        }
        // for(auto arr1, auto arr2: w1, w2){
        //     if(arr1.first!=arr2.first)
        //         return false;
        // }
        vector<int> v1;
        vector<int> v2;
        for(auto arr: w1){
            v1.push_back(arr.second);
        }
        for(auto arr: w2){
            v2.push_back(arr.second);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i])
                return false;
        }
        return true;
    }
};