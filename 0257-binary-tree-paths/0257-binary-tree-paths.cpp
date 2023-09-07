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
    vector<string> st;
    void path(TreeNode* root, string s){
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL){
            s+=to_string(root->val);
            st.push_back(s);
            return;
        }
        s+=to_string(root->val);
        s+="->";
        path(root->left,s);
        path(root->right,s);
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s="";
        if(root==NULL){
            st.push_back(s);
            return st;
        }
        path(root,s);
        return st;
    }
};