class NumberContainers {
public:
    map<int,int> digit;
    map<int,priority_queue<int,vector<int>,greater<int>>> minIndex;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        digit[index]=number;
        minIndex[number].push(index);
    }
    
    int find(int number) {
        while(!minIndex[number].empty() && digit[minIndex[number].top()]!=number)
            minIndex[number].pop();
        if(minIndex.find(number)==minIndex.end() || minIndex[number].empty())
            return -1;
        return minIndex[number].top();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */