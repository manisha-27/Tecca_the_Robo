class SmallestInfiniteSet {
public:
    set<int> check;
    priority_queue <int, vector<int>, greater<int>> pq;
    SmallestInfiniteSet() {
        for(int i=1;i<=1000;i++)
            pq.push(i);
    }
    int popSmallest() {
        int a=pq.top();
        check.insert(a);
        pq.pop();
        return a;
    }
    
    void addBack(int num) {
        if(check.find(num)!=check.end()){
            pq.push(num);
            check.erase(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */