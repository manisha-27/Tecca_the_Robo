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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>> order;
        queue<pair<TreeNode*, int>> qe;
        qe.push({root,0});
        order[0][0].push_back(root->val);
        int lvl=1;
        while(!qe.empty()){
            int s=qe.size();
            while(s>0){
                TreeNode* temp=qe.front().first;
                int num=qe.front().second;
                qe.pop();
                if(temp->left!=NULL){
                    qe.push({temp->left,num-1});
                    order[num-1][lvl].push_back(temp->left->val);
                }
                if(temp->right!=NULL){
                    qe.push({temp->right,num+1});
                    order[num+1][lvl].push_back(temp->right->val);
                }
                s--;
            }
            lvl++;
        }
        // map<int,map<int,vector<int>>> order;
        vector<vector<int>> vtraversal;
        for(auto a: order){
            vector<int> arr;
            for(auto b: a.second){
                sort(b.second.begin(),b.second.end());
                for(auto c: b.second){
                    arr.push_back(c);
                }
            }
            vtraversal.push_back(arr);
        }
        return vtraversal;
    }
};