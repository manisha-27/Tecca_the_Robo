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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>> sortList;
        ListNode* head=new ListNode();
        for(int i=0;i<lists.size();i++){
            ListNode* curr=lists[i];
            while(curr!=NULL){
                sortList.push({curr->val,curr});
                curr=curr->next;
            }
        }
        ListNode* temp=head;
        while(!sortList.empty()){
            ListNode* curr=sortList.top().second;
            temp->next=curr;
            // cout<<sortList.top().first<<endl;
            temp=temp->next;
            sortList.pop();
        }
        return head->next;
    }
};