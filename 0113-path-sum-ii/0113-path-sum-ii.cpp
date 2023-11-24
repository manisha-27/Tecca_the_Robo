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
    vector<vector<int>> paths;
    void allPaths(TreeNode* root, int targetSum, vector<int>& lvl){
        if(root==NULL) return;
        targetSum-=root->val;
        lvl.push_back(root->val);
        if(root->left==NULL && root->right==NULL && targetSum==0){
            paths.push_back(lvl);
        }
        vector<int> leftp=lvl;
        vector<int> rightp=lvl;
        allPaths(root->left,targetSum,leftp);
        // lvl.pop_back();
        allPaths(root->right,targetSum,rightp);
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> lvl;
        allPaths(root, targetSum, lvl);
        return paths;
    }
};