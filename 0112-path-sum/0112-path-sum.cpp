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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return false;
        if(root->left==NULL && root->right==NULL)
            return targetSum==root->val;
        bool l=hasPathSum(root->left,targetSum-root->val);
        bool r=hasPathSum(root->right, targetSum-root->val);
        return l||r;
    }
};



// class Solution {
// public:
//     bool PathSum(TreeNode* root, int target, int sum){
//         if(root==NULL || sum>target){
//             cout<<1<<endl;
//             return false;
//         }
//         cout<<sum<<endl;
//         if(sum==target){
//             cout<<3<<"*"<<endl;
//             return true;
//         }
//         TreeNode* l=root->left;
//         if(l!=NULL){PathSum(l,target,sum+l->val);}
//         TreeNode* r=root->right;
//         if(r!=NULL){PathSum(r,target,sum+r->r);}
//         cout<<2<<endl;
//         return false;
//     }
//     bool hasPathSum(TreeNode* root, int targetSum) {
//         int sum=0;
//         return PathSum(root, targetSum, sum);
        
//     }
// };