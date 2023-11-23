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
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL) return {};
        queue<TreeNode*> qe;
        vector<int> maxRow;
        qe.push(root);
        while(!qe.empty()){
            int s=qe.size();
            int maxi=INT_MIN;
            while(s>0){
                TreeNode* temp=qe.front();
                maxi=max(maxi,temp->val);
                qe.pop();
                if(temp->left!=NULL) qe.push(temp->left);
                if(temp->right!=NULL) qe.push(temp->right);
                s--;
            }
            maxRow.push_back(maxi);
        }
        return maxRow;
    }
};