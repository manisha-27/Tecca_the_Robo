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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL) return {};
        queue<TreeNode*> qe;
        vector<int> rview;
        qe.push(root);
        while(!qe.empty()){
            int s=qe.size();
            int pright;
            while(s--){
                TreeNode* temp=qe.front();
                pright=temp->val;
                qe.pop();
                if(temp->left!=NULL) qe.push(temp->left);
                if(temp->right!=NULL) qe.push(temp->right);
            }
            rview.push_back(pright);
        }
        return rview;
    }
};