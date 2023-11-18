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
        if(root==NULL) return {};
        vector<vector<int>> level;
        queue<TreeNode*> qe;
        qe.push(root);
        // level.push_back({root->val});
        while(!qe.empty()){
            int s=qe.size();
            vector<int> ele;
            while(s>0){
                TreeNode* temp=qe.front();
                qe.pop();
                ele.push_back(temp->val);
                if(temp->left!=NULL) qe.push(temp->left);
                if(temp->right!=NULL) qe.push(temp->right);
                s--;
            }
            level.push_back(ele);
        }
        return level;
    }
};