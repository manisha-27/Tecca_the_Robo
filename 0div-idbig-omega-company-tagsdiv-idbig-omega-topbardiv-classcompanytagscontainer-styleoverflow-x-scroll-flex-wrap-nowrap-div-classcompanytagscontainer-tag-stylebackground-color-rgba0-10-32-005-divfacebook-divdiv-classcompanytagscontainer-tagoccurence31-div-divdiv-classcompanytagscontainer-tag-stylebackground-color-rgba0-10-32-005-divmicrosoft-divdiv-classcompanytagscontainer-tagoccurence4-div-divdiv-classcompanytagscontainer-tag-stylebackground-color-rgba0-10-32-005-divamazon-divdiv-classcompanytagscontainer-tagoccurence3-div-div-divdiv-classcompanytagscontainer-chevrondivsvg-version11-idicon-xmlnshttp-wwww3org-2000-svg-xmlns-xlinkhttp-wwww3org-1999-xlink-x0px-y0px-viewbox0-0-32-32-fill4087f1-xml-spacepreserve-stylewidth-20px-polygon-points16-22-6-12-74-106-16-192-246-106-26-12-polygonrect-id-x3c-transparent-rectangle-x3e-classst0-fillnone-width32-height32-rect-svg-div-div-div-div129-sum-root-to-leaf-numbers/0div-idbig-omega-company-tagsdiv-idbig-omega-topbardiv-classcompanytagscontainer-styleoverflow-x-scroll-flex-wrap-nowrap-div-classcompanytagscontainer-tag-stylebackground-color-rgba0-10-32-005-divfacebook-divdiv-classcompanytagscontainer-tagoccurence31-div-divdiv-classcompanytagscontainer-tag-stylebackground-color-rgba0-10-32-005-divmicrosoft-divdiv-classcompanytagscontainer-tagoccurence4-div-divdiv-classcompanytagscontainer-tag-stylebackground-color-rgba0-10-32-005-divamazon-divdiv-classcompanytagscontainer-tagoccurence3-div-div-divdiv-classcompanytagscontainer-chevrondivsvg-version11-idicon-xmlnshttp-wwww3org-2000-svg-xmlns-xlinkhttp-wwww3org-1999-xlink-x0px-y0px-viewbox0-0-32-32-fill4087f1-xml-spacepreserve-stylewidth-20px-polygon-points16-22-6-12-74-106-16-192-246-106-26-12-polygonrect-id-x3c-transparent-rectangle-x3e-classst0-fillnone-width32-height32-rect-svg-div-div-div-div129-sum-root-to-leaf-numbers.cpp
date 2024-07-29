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
    int sumTreeNum(TreeNode* root, int sum){
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL){
            // cout<<root->val<<" - "<<(sum*10)+root->val<<endl;
            return (sum*10)+root->val;
        }
        int n=root->val;
        // cout<<n<<" - "<<(sum*10)+n<<endl;
        int a=sumTreeNum(root->left, (sum*10)+n);
        int b=sumTreeNum(root->right, (sum*10)+n);
        cout<<a<<" - "<<b<<endl;
        return a+b;
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        return sumTreeNum(root, sum);
    }
};
// class Solution {
// public:
//     int total=0;
//     void sumTreeNum(TreeNode* root, int sum){
//         if(root->left==NULL && root->right==NULL){
//             // sum+=root->val;
//             total=(sum*10)+root->val;
//             cout<<sum<<endl;
//             return;
//         }
//         int n=root->val;
//         cout<<n<<" - "<<(sum*10)+n<<endl;
//         sumTreeNum(root->left, (sum*10)+n);
//         sumTreeNum(root->right, (sum*10)+n);
//         return;
//     }
//     int sumNumbers(TreeNode* root) {
//         int sum=0;
//         sumTreeNum(root, sum);
//         return total;
//     }
// };