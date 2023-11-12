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
    void checkNode(TreeNode* root, vector<int>& arr){
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* temp=st.top();
            if(temp->right==NULL && temp->left==NULL)
                arr.push_back(temp->val);
            st.pop();
            if(temp->right!=NULL)st.push(temp->right);
            if(temp->left!=NULL)st.push(temp->left);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        TreeNode* r1=root1; TreeNode* r2=root2;
        vector<int> arr1,arr2;
        checkNode(root1, arr1);
        checkNode(root2, arr2);
        return arr1==arr2;
    }
};