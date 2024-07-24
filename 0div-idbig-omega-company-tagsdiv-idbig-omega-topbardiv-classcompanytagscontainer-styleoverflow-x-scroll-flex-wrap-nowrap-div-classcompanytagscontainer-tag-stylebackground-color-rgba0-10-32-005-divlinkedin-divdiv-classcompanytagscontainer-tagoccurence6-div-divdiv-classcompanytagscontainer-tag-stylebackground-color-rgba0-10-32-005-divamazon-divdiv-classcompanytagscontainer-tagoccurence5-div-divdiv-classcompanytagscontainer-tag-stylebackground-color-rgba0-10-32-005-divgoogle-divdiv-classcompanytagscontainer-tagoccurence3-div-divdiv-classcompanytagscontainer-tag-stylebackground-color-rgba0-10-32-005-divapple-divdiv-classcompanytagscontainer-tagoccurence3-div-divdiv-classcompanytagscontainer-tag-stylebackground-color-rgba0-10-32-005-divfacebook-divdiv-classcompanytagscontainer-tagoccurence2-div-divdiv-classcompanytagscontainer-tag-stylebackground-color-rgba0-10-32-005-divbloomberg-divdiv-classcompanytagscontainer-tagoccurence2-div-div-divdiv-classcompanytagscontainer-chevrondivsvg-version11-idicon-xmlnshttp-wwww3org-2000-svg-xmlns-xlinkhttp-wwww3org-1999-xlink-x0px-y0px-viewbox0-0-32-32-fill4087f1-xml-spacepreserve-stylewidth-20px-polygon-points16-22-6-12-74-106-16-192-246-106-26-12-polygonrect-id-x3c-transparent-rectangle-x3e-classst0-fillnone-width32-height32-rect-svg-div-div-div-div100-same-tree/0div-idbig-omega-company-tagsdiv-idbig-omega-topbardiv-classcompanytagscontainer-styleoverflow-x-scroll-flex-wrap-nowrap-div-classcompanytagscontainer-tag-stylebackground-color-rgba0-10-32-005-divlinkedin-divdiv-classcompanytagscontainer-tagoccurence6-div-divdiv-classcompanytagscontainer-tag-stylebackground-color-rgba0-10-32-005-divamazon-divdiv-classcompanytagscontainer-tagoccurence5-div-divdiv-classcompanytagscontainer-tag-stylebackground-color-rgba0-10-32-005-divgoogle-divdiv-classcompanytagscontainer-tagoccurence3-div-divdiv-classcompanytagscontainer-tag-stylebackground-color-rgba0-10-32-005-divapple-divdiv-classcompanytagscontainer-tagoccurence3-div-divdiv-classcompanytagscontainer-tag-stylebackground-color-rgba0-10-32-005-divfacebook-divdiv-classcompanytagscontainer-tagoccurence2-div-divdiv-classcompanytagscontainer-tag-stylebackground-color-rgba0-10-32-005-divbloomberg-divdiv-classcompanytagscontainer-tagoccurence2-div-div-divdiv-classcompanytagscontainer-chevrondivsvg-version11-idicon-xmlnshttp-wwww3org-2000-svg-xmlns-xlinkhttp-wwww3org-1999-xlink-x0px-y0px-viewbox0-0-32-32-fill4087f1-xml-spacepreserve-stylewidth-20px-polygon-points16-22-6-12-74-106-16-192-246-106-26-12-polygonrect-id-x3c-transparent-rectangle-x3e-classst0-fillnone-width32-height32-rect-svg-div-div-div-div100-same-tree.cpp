/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if((p!=NULL && q==NULL) || (p==NULL && q!=NULL) || (p!=NULL && q!=NULL && p->val!=q->val)) return false;
        queue<TreeNode*> qe1;
        queue<TreeNode*> qe2;
        qe1.push(p);
        qe2.push(q);
        while(!qe1.empty() && !qe2.empty()){
            int n=qe1.size();
            int m=qe2.size();
            if(n!=m) return false;
            while(m--){
                p=qe1.front();
                q=qe2.front();
                qe1.pop();
                qe2.pop();
                if(p->left!=NULL) qe1.push(p->left);
                if(q->left!=NULL) qe2.push(q->left);
                if((p->left!=NULL && q->left==NULL) || (p->left==NULL && q->left!=NULL) || (p->left!=NULL && q->left!=NULL && p->left->val!=q->left->val))
                    return false;
                if(p->right!=NULL) qe1.push(p->right);
                if(q->right!=NULL) qe2.push(q->right);
                if((p->right!=NULL && q->right==NULL) || (p->right==NULL && q->right!=NULL) || (p->right!=NULL && q->right!=NULL && p->right->val!=q->right->val))
                    return false;
            }
        }
        return qe1.empty() && qe2.empty();
    }
};