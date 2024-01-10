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
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int,vector<int>> gph;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* temp=st.top();
            st.pop();
            TreeNode* templ=temp->left;
            TreeNode* tempr=temp->right;
            if(tempr!=NULL){
                gph[temp->val].push_back(tempr->val);
                gph[tempr->val].push_back(temp->val);
                st.push(tempr);
            }
            if(templ!=NULL){
                gph[temp->val].push_back(templ->val);
                gph[templ->val].push_back(temp->val);
                st.push(templ);
            }
        }
        queue<int> q;
        q.push(start);
        unordered_set<int> visited;
        int minutesPassed = -1;
        while (!q.empty()) {
            ++minutesPassed;
            for (int levelSize = q.size(); levelSize > 0; --levelSize) {
                int currentNode = q.front();
                q.pop();
                visited.insert(currentNode);
                for (int adjacentNode : gph[currentNode]) {
                    if (!visited.count(adjacentNode)) {
                        q.push(adjacentNode);
                    }
                }
            }
        }
        return minutesPassed;
        // stack<int> stk;
        // stk.push(start);
        // int count=-1;
        // unordered_set<int> visited;
        // while(!stk.empty()){
        //     ++count;
        //     int a=stk.top();
        //     visited.insert(a);
        //     // vector<int> arr=gph[stk.top()];
        //     stk.pop();
        //     for(int x: gph[a]){
        //         if (!visited.count(x)) stk.push(x);
        //     }
        // }
        // return count;
    }
};