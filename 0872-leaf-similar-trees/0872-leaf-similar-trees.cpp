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
    vector<int> leafDFS(TreeNode* root){
        vector<int> arr;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* temp=st.top();
            if(temp->left==NULL && temp->right==NULL){
                arr.push_back(temp->val);
                // cout<<temp->val<<" ";
            }
            st.pop();
            if(temp->right!=NULL)st.push(temp->right);
            if(temp->left!=NULL)st.push(temp->left);
        }
        // cout<<endl;
        return arr;
    }
    // vector<int> leafBFS(TreeNode* root){
    //     vector<int> arr;
    //     queue<TreeNode*> qe;
    //     qe.push(root);
    //     while(!qe.empty()){
    //         TreeNode* temp=qe.front();
    //         if(temp->left==NULL && temp->right==NULL){
    //             arr.push_back(temp->val);
    //             cout<<temp->val<<" ";
    //         }
    //         qe.pop();
    //         if(temp->left!=NULL)qe.push(temp->left);
    //         if(temp->right!=NULL)qe.push(temp->right);
    //     }
    //     cout<<endl;
    //     return arr;
    // }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> arr1=leafDFS(root1);
        vector<int> arr2=leafDFS(root2);
        return arr1==arr2;
    }
};