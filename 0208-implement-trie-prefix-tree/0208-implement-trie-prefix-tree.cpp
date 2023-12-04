class TrieNode{
public:
    bool endofNode;
    vector<TrieNode*> children;
    TrieNode(){
        endofNode=false;
        children= vector<TrieNode*>(26,NULL);
    }
};

class Trie {
public:
    TrieNode* root;
    Trie() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* curr=root;
        int n=word.size();
        for(int i=0;i<n;i++){
            int k=word[i]-'a';
            if(curr->children[k]==NULL)
                curr->children[k]=new TrieNode();
            curr=curr->children[k];
        }
        curr->endofNode=true;
    }
    
    bool search(string word) {
        TrieNode* curr=root;
        int n=word.size();
        for(int i=0;i<n;i++){
            int k=word[i]-'a';
            if(curr->children[k]==NULL)
                return false;
            curr=curr->children[k];
        }
        return curr->endofNode;
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr=root;
        int n=prefix.size();
        for(int i=0;i<n;i++){
            int k=prefix[i]-'a';
            if(curr->children[k]==NULL)
                return false;
            curr=curr->children[k];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */