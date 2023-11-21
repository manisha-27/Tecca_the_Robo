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

// left root  right

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        vector<int> preo;
        stack<TreeNode*> st;
        // st.push(root);
        do{
            while(root!=NULL){
                st.push(root);
                root=root->left;
            }
            root=st.top();
            st.pop();
            preo.push_back(root->val);
            root=root->right;
        }while(!st.empty() || root!=NULL);
        return preo;
    }
};