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
    int ans = 0;
    
    int pseudoPalindromicPaths (TreeNode* root) {
        preorder(root, 0);
        return ans;
    }
    
    void preorder(TreeNode* node, int cnt) {
        if (node == NULL) return;
        cnt ^= (1 << node->val);
        cout<<cnt<<" ";
        if (!node->left && !node->right) {
            ans += (cnt & (cnt - 1)) == 0;
        }
        preorder(node->left, cnt);
        preorder(node->right, cnt);
    }
};


// class Solution {
// public:
//     int count=0;
//     bool checkPalindrome(vector<int>& arr){
//         map<int,int> check;
//         for(int a: arr){
//             check[a]++;
//         }
//         int odd=0;
//         for(auto a: check){
//             if(a.second%2!=0)
//                 odd++;
//             if(odd>1)
//                 return false;
//         }
//         return true;
//     }
//     void pseudoPalindrome(TreeNode* root, vector<int>& arr){
//         arr.push_back(root->val);
//         if(root->left==nullptr && root->right==nullptr){
//             if(checkPalindrome(arr)){
//                 count++;
//             }
//             arr.pop_back();
//             return;
//         }
//         if(root->left!=NULL)pseudoPalindrome(root->left, arr);
//         if(root->right!=NULL)pseudoPalindrome(root->right, arr);
//         arr.pop_back();
//     }
//     int pseudoPalindromicPaths (TreeNode* root) {
//         vector<int> arr;
//         pseudoPalindrome(root, arr);
//         return count;
//     }
// };