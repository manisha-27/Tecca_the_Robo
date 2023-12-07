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
    ListNode* mergeNodes(ListNode* head) {
        if(head->val==0 && head!=NULL)
            head=head->next;
        if(head==NULL)
            return head;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* temp=curr;
            int sum=0;
            // cout<<1<<" - "<<endl;
            while(curr->next!=NULL && curr->val!=0){
                sum+=curr->val;
                curr=curr->next;
                // cout<<curr->val<<endl;
            }
            if(curr!=NULL && curr->val==0){
                curr=curr->next;
                // sum+=curr->val;
                // cout<<2<<endl;
            }
            temp->val=sum;
            // cout<<sum<<" * "<<endl;
            // if(curr->next==NULL)
                // temp->next=NULL;
            // else
                temp->next=curr;
            // curr=curr->next;
        }
        return head;
    }
};