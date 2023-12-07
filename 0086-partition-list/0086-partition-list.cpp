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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL)
            return head;
        // ListNode* dummy=new ListNode();
        ListNode* temp1=new ListNode();  // contains node value less than the given value  // head will be pointing towards temp1 head
        ListNode* t1=temp1;    // this will be traversing temp1
        ListNode* temp2=new ListNode(); // contains node value greater than equal to the given value
        ListNode* t2=temp2;    // this will be travesrsing temp2
        while(head!=NULL){
            if(head->val<x){
                t1->next=head;
                t1=t1->next;
            }else{
                t2->next=head;
                t2=t2->next;
            }
            head=head->next;
        }
        t1->next=temp2->next;
        t2->next=NULL;
        return temp1->next;
    }
};