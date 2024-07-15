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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
            return {};
        queue<TreeNode*> qe;
        vector<vector<int>> ans;
        qe.push(root);
        while(!qe.empty()){
            int n=qe.size();
            vector<int> arr;
            while(n--){
                TreeNode* node=qe.front();
                if(node->left!=NULL){
                    qe.push(node->left);
                }
                if(node->right!=NULL){
                    qe.push(node->right);
                }
                arr.push_back(node->val);
                qe.pop();
            }
            ans.push_back(arr);
        }
        return ans;
    }
};