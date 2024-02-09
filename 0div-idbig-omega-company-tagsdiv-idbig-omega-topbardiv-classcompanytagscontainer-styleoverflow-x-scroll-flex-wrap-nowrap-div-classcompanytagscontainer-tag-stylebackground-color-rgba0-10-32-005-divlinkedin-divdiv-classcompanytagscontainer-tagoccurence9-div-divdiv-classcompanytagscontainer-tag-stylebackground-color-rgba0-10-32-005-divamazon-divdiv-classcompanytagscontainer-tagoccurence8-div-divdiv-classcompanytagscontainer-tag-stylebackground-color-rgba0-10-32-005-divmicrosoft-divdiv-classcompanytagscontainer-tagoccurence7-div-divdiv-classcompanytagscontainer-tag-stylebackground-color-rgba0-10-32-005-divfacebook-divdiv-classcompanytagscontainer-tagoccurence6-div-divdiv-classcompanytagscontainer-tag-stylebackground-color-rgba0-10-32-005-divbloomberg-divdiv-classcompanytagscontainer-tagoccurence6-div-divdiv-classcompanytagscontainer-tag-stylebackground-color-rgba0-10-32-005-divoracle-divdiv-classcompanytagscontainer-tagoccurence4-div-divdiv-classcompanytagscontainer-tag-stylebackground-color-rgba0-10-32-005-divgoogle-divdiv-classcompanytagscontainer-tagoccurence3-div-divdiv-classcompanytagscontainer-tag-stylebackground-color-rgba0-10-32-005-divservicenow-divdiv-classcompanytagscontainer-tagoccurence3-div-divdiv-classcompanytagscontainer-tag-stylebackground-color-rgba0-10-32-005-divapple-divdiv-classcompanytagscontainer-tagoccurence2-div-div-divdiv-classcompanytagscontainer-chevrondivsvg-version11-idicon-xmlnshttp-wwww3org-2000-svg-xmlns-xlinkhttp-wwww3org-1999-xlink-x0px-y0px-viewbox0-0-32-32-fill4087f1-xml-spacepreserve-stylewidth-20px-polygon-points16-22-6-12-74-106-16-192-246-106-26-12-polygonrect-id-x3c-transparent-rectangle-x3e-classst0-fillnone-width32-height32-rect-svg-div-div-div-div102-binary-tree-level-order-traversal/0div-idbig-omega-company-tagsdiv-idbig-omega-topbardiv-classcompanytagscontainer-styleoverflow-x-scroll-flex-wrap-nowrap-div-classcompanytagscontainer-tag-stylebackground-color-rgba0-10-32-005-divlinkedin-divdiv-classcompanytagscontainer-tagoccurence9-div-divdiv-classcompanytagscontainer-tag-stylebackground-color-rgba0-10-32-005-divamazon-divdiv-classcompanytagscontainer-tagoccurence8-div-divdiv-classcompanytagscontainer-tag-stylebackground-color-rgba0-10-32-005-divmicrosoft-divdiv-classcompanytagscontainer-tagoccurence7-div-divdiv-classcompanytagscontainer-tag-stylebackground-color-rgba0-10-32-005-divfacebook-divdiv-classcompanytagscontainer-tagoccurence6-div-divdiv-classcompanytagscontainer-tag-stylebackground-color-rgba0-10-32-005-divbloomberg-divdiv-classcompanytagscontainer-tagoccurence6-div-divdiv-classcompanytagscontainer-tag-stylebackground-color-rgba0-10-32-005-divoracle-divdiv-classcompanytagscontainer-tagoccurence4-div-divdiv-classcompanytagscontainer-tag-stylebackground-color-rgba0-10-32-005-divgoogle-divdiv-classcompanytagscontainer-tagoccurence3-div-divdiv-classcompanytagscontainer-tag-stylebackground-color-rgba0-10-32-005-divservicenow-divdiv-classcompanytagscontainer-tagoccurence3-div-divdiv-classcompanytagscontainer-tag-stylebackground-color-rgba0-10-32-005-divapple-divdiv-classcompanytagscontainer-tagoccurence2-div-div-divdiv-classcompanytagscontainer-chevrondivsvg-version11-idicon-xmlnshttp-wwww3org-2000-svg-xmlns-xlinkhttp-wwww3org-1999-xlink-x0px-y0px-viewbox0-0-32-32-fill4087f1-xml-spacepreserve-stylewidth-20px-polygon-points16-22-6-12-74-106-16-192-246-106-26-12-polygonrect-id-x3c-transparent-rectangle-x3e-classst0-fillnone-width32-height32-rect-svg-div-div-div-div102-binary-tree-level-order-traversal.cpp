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
        vector<vector<int>> ans;
        queue<TreeNode*> qe;
        qe.push(root);
        while(!qe.empty()){
            vector<int> arr;
            int n=qe.size();
            while(n--){
                TreeNode* temp=qe.front();
                qe.pop();
                if(temp->left!=NULL)qe.push(temp->left);
                if(temp->right!=NULL)qe.push(temp->right);
                arr.push_back(temp->val);
            }
            ans.push_back(arr);
        }
        return ans;
    }
};