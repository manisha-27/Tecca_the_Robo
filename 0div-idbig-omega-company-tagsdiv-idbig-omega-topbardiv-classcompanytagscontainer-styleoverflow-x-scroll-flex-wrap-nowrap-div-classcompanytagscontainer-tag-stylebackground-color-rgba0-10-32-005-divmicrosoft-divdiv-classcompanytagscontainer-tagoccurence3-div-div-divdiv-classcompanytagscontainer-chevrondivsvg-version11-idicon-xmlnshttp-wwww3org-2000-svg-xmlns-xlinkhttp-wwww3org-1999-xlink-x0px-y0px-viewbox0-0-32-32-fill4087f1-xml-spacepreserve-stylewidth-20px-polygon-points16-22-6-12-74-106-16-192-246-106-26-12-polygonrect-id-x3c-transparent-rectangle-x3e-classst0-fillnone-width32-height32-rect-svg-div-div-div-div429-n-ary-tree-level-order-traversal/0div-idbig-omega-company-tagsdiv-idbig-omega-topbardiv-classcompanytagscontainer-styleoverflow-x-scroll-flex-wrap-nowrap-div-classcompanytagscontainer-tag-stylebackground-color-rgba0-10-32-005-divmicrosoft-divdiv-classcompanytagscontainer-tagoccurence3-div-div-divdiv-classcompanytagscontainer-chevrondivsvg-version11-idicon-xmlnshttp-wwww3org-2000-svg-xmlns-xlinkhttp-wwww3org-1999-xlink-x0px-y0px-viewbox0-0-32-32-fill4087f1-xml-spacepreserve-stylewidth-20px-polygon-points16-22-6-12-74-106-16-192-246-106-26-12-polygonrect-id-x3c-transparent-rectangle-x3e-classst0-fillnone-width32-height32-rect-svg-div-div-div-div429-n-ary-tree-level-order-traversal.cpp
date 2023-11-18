/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL) return {};
        vector<vector<int>> level;
        queue<Node*> qu;
        qu.push(root);
        while(!qu.empty()){
            int s=qu.size();
            vector<int> ele;
            while(s>0){
                Node* temp=qu.front();
                ele.push_back(temp->val);
                qu.pop();
                for(int i=0;i<temp->children.size();i++){
                    qu.push(temp->children[i]);
                }
                s--;
            }
            level.push_back(ele);
        }
        return level;
    }
};