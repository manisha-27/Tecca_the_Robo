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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL || left>=right)
            return head;
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode* prev1=dummy;
        ListNode* curr1=head;
        for(int i=1;i<left;i++){
            prev1=curr1;
            curr1=curr1->next;
        }
        
        ListNode* prev2=prev1;
        ListNode* curr2=head;
        for(int i=1;i<right;i++){
            // prev1=curr1;
            curr2=curr2->next;
        }
        prev1->next=NULL;
        prev2=curr2->next;
        curr2->next=NULL;
        // curr2=curr1;
        // Reverse the sublist
        ListNode* prev = nullptr;
        ListNode* temp = curr1;
        while (temp != nullptr) {
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        prev1->next=prev;
        curr1->next=prev2;
        
        return dummy->next;
    }
};