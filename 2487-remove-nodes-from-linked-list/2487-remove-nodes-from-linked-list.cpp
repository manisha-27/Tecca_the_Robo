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
    vector<pair<ListNode*, int>> nextLargerNodes(ListNode* head) {
        vector<pair<ListNode*, int>> ans;
        stack<pair<ListNode*, int>> s;
        int index = 0;
        
        while (head != NULL) {
            while (!s.empty() && s.top().first->val < head->val) {
                ans[s.top().second] = {head, index};
                s.pop();
            }
            s.push({head, index});
            ans.push_back({nullptr, -1});
            head = head->next;
            index++;
        }
        
        return ans;
    }

    ListNode* removeNodes(ListNode* head) {
        vector<pair<ListNode*, int>> res = nextLargerNodes(head);
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* temp = dummy;
        
        int index = 0;
        while (temp->next != NULL) {
            if (res[index].first != nullptr) {
                temp->next = temp->next->next;
            } else {
                temp = temp->next;
            }
            index++;
        }
        
        return dummy->next;
    }
};
