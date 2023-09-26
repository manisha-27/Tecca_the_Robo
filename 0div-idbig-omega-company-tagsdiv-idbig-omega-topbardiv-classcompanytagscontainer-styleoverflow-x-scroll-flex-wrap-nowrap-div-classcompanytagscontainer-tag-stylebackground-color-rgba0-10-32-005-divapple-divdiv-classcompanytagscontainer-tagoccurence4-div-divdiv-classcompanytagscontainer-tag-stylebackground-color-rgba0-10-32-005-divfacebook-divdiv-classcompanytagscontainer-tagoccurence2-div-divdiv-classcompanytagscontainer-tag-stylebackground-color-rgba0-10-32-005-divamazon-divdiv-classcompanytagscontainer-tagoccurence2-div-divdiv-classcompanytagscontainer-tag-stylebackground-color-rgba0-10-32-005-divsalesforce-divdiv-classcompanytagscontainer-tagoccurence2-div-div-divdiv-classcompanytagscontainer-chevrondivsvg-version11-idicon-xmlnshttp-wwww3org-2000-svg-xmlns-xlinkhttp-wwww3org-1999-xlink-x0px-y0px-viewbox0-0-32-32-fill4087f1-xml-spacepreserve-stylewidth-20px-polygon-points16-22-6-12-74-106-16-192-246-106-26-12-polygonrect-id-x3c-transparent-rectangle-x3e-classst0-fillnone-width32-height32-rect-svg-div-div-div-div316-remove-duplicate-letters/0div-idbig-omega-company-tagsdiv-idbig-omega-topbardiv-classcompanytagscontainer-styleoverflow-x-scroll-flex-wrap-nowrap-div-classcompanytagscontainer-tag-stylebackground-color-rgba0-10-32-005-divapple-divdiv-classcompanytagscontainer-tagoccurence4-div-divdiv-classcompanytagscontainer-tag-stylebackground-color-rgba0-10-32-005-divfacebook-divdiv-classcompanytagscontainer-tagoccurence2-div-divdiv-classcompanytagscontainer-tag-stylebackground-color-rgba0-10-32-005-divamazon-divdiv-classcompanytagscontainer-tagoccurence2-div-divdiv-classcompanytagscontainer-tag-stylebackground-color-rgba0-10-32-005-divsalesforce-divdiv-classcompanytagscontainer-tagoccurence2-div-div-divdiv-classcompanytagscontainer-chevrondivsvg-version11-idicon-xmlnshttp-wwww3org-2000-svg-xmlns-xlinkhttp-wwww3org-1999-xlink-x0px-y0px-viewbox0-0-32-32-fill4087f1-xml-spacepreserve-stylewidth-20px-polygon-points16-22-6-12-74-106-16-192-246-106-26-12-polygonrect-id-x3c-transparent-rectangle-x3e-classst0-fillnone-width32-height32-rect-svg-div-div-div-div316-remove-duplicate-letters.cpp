class Solution {
public:
    // string removeDuplicateLetters(string s) {
    //     map<char,int> ch;
    //     string st="";
    //     for(int i=0;i<s.length();i++){
    //         if(ch.find(s[i])==ch.end()){
    //             ch[s[i]]+=1;
    //         }
    //     }
    //     for(auto c: ch){
    //         st+=c.first;
    //     }
    //     // sort(st.begin(),st.end());
    //     return st;
    // }
    string removeDuplicateLetters(string s) {
    vector<int> cand(256, 0);
    vector<bool> visited(256, false);
    for (char c : s)
        cand[c]++;
    string result = "0";
    for (char c : s) {
        cand[c]--;
        if (visited[c]) continue;
        while (c < result.back() && cand[result.back()]) {
            visited[result.back()] = false;
            result.pop_back();
        }
        result += c;
        visited[c] = true;
    }
    return result.substr(1);
}
};