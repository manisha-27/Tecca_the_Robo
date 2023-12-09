class Solution {
public:
    string frequencySort(string s) {
        map<char,int> frq;
        for(auto a:s){
            frq[a]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto a: frq){
            pq.push({a.second,a.first});
        }
        s="";
        while(!pq.empty()){
            int a=pq.top().first;
            char c=pq.top().second;
            while(a>0){
                s+=c;
                a--;
            }
            pq.pop();
        }
        return s;
    }
};