/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        stack<pair<int, int>> s;
        int index = 0;

        while (head != NULL) {
            while (!s.empty() && s.top().first < head->val) {
                ans[s.top().second] = head->val;
                s.pop();
            }

            s.push({head->val, index});
            ans.push_back(0); // Initialize the answer for the current node to 0
            head = head->next;
            index++;
        }

        return ans;
    }
};
