/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root){
        if(root==NULL) return NULL;
        queue<Node*> qe;
        qe.push(root);
        while(!qe.empty()){
            int s=qe.size();
            while(s>0){
                Node* temp=qe.front();
                qe.pop();
                if(s==1){
                    temp->next==NULL;
                }else{
                    temp->next=qe.front();
                }
                if(temp->left!=NULL) qe.push(temp->left);
                if(temp->right!=NULL) qe.push(temp->right);
                s--;
            }
        }
        return root;
    }
};