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
        vector<int> rview;
        queue<TreeNode*> qe;
        qe.push(root);
        while(!qe.empty()){
            int s=qe.size();
            while(s>0){
                TreeNode* temp=qe.front();
                qe.pop();
                // vector<int> ele;
                if(s==1)
                    rview.push_back(temp->val);
                if(temp->left!=NULL) qe.push(temp->left);
                if(temp->right!=NULL) qe.push(temp->right);
                s--;
            }
        }
        return rview;
    }
};