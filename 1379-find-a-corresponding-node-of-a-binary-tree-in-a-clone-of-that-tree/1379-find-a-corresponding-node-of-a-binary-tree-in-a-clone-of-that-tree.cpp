/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// class Solution {
// public:
//     TreeNode* get=NULL;
//     void clone(TreeNode* cloned, TreeNode* target){
//         if(cloned==NULL && cloned->left==NULL && cloned->right==NULL)
//             return;
//         if(cloned==target)
//             get=cloned;
//         clone(cloned->left, target);
//         clone(cloned->right, target);
//         return;
//     }
//     TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
//         clone(cloned,target);
//         return get;
//     }
// };

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (original == nullptr || cloned == nullptr) {
            return nullptr;
        }
        
        if (original == target) {
            return cloned;
        }
        
        TreeNode* leftResult = getTargetCopy(original->left, cloned->left, target);
        if (leftResult != nullptr) {
            return leftResult;
        }
        
        return getTargetCopy(original->right, cloned->right, target);
    }
};
