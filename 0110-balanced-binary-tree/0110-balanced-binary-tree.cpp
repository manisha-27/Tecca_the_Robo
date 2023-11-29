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
    int getHeight(TreeNode* root){
        if(root==NULL) return 0;
        int pleft=0,pright=0;
        if(root->left!=NULL) pleft=getHeight(root->left);
        if(root->right!=NULL) pright=getHeight(root->right);
        if(pleft==-1 || pright==-1 || abs(pleft-pright)>1) return -1;
        return max(pright,pleft)+1;
    }
    bool isBalanced(TreeNode* root) {
        return getHeight(root)!=-1;
    }
};