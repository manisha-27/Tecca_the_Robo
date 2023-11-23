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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(root==NULL) return root;
        if(depth==1){
            // cout<<"1";
            TreeNode* temp=new TreeNode(val);
            temp->left=root; 
            // temp->right=NULL;
            return temp;
        }
        queue<TreeNode*> qe;
        qe.push(root);
        depth--;
        while(!qe.empty()){
            depth--;
            cout<<depth<<endl;
            int s=qe.size();
            while(s>0){
                TreeNode* temp=qe.front();
                qe.pop();
                TreeNode* pleft=temp->left;
                TreeNode* pright=temp->right;
                if(depth==0){
                    // if(pleft!=NULL || temp==root){
                        temp->left=new TreeNode(val); 
                        temp->left->left=pleft;
                    // }
                    // if(pright!=NULL){
                        temp->right=new TreeNode(val);
                        temp->right->right=pright;
                    // }
                }
                if(pleft!=NULL) qe.push(pleft);
                if(pright!=NULL) qe.push(pright);
                s--;
            }
        }
        return root;
    }
};