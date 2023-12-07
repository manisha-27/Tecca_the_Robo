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
    ListNode* reverse(ListNode* root){
        ListNode* temp=root;
        ListNode* curr=root;
        ListNode* prev=NULL;
        while(temp!=NULL){
            temp=temp->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    ListNode* middleEle(ListNode* root){
        ListNode* slow=root;
        ListNode* fast=root;
        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* root1, ListNode* root2){
        ListNode* curr=new ListNode();
        ListNode* root=curr;
        while(root1!=NULL && root2!=NULL){
            curr->next=root1;
            root1=root1->next;
            curr=curr->next;
            curr->next=root2;
            root2=root2->next;
            curr=curr->next;
        }
        if(root1!=NULL){
            curr->next=root1;
            // root1=root1->next;
        }
        if(root2!=NULL){
            curr->next=root2;
            // root2=root2->next;
        }
        return root->next;
    }
    void reorderList(ListNode* head) {
        ListNode* middle=middleEle(head);
        ListNode* temp1=reverse(middle->next);
        middle->next=NULL;
        head=merge(head, temp1);
    }
};