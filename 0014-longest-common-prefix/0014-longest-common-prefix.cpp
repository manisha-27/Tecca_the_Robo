class TrieNode{
public:
    vector<TrieNode*> children;
    int childrensize;
    bool endofWord;
    TrieNode(){
        children=vector<TrieNode*>(26,NULL);
        childrensize=0;
        endofWord=false;
    }
};
class Solution {
public:
    TrieNode* root=new TrieNode();
    void insert(string word, TrieNode* root){
        TrieNode* curr=root;
        int n=word.size();
        for(int i=0;i<n;i++){
            int k=word[i]-'a';
            if(curr->children[k]==NULL){
                curr->children[k]=new TrieNode();
                curr->childrensize++;
                // cout<<curr->childrensize<<endl;
            }
            curr=curr->children[k];
        }
        curr->endofWord=true;
        // cout<<"+++++++++++"<<endl;
    }
    string commonPrefix(TrieNode* root, string s) {
        TrieNode* curr = root;
        string str = "";
        for (int i = 0; i < s.size(); i++) {
            int k = s[i] - 'a';
            if (curr->childrensize == 1 && !curr->endofWord) {
                str += s[i];
            } else {
                return str;
            }
            curr = curr->children[k];
        }
        return str;
    }
    // string commonPrefix(TrieNode* root,string s){
    //     TrieNode* curr=root;
    //     string str="";
    //     for(int i=0;i<s.size();i++){
    //         int k=s[i]-'a';
    //         if(curr->childrensize==1)
    //             str+=s[i];
    //         else
    //             return str;
    //     }
    //     return str;
    // }
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        for(int i=0;i<n;i++){
            insert(strs[i],root);
        }
        return commonPrefix(root,strs[0]);
    }
};