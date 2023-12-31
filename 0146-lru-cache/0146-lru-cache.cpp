class node{
public:
    int key;
    int value;
    node* next;
    node* prev;
    node(int k, int v){
        key=k;
        value=v;
    }
};

class LRUCache {
public:
    int cap;
    node* head= new node(-1,-1);
    node* tail= new node(-1,-1);
    unordered_map<int,node*> window;
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    void addNode(int key,int value){
        node* temp=head->next;
        node* curr= new node(key,value);
        head->next=curr;
        curr->prev=head;
        curr->next=temp;
        temp->prev=curr;
        window[key]=curr;
        if(window.size()>cap)
            deleteNode(tail->prev);
    }
    void deleteNode(node* temp){
        int a=temp->key;
        window.erase(a);
        node* left=temp->prev;
        node* right=temp->next;
        left->next=right;
        right->prev=left;
    }
    int get(int key) {
        if(window.find(key)==window.end())
            return -1;
        node* temp=window[key];
        int v=temp->value;
        
        deleteNode(temp);
        addNode(key,v);
        return v;
    }
    // addNode=> add into map too
    void put(int key, int value) {
        if(window.find(key)==window.end())
            addNode(key,value);
        else{
            node* temp=window[key];
            
            deleteNode(temp);
            addNode(key,value);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */