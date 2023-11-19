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
    int sumOfLeftLeaves(TreeNode* root) {
        stack<TreeNode*> st;
        st.push(root);
        int sum=0;
        while(!st.empty()){
            TreeNode* temp=st.top();
            st.pop();
            if(temp->left!=NULL){
                st.push(temp->left);
                if(temp->left->left==NULL && temp->left->right==NULL) sum+=temp->left->val;
                // cout<<temp->left->val;
            }
            if(temp->right!=NULL) st.push(temp->right);
        }
        return sum;
    }
};