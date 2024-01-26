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

// ListNode* mid1;
// ListNode* mid2;
// ListNode* slow1, slow2, fast1, fast2;
// while(fast1!=NULL){
// slow1=slow1->next;
// fast1=fast1->next->next;
// }
// while(fast2!=NULL){
// slow2=slow2->next;
// fast2=fast2->next->next;
// }
        

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=new ListNode();
        ListNode* ans=head;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                ans->next=list1;
                list1=list1->next;
            }else if(list1->val>list2->val){
                ans->next=list2;
                list2=list2->next;
            }
            ans=ans->next;
        }
        while(list1!=NULL){
            ans->next=list1;
            list1=list1->next;
            ans=ans->next;
        }
        while(list2!=NULL){
            ans->next=list2;
            list2=list2->next;
            ans=ans->next;
        }
        return head->next;
    }
};