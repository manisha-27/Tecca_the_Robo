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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> qe;
        qe.push(root);
        vector<int> ele;
        while(!qe.empty()){
            int s=qe.size();
            ele.clear();
            while(s>0){
                TreeNode* temp=qe.front();
                qe.pop();
                if(temp->left!=NULL) qe.push(temp->left);
                if(temp->right!=NULL) qe.push(temp->right);
                ele.push_back(temp->val);
                s--;
            }
        }
        return ele[0];
    }
};