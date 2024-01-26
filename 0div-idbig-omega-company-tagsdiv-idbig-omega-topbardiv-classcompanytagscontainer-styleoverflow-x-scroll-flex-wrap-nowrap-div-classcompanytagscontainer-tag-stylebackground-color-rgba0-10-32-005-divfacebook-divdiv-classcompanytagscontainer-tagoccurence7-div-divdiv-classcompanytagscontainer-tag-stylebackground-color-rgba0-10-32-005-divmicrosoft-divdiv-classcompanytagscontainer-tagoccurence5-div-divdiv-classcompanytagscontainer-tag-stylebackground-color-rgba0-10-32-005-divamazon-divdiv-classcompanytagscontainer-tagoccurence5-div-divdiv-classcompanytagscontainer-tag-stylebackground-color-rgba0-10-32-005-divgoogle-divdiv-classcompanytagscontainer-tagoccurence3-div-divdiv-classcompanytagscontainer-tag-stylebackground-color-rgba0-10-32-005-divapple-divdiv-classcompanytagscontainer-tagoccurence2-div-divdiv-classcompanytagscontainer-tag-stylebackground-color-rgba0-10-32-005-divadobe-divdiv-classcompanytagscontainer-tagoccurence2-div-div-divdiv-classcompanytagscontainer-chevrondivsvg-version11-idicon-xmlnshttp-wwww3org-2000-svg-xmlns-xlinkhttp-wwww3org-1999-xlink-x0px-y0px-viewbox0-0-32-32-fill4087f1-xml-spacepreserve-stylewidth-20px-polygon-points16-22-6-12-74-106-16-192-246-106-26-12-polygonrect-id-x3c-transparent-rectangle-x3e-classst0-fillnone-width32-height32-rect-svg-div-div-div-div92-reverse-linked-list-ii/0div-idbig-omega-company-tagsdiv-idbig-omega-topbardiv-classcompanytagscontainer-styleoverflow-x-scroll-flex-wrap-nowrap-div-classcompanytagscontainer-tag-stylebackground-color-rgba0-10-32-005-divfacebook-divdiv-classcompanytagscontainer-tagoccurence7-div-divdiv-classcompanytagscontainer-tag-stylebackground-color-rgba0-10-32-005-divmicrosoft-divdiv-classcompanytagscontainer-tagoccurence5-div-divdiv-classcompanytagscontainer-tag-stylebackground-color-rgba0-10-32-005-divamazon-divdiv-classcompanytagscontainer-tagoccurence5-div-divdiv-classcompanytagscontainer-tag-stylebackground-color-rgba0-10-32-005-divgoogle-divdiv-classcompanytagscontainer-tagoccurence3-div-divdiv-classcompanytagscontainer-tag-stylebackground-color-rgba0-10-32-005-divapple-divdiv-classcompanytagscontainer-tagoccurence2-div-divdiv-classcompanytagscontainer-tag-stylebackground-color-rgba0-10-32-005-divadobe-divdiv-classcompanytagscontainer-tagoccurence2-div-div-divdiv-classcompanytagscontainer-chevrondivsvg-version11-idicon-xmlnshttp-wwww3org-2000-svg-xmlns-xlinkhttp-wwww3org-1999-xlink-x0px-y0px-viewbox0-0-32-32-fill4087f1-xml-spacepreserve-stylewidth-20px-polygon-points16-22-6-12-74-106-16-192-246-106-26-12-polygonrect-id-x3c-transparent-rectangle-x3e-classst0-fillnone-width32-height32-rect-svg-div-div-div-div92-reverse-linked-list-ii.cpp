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
        if (head == nullptr || head->next == nullptr || left >= right)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev1 = dummy;
        ListNode* curr1 = head;

        // Move to the starting position
        for (int i = 1; i < left; i++) {
            prev1 = curr1;
            curr1 = curr1->next;
        }

        ListNode* prev2 = prev1;
        ListNode* curr2 = curr1;

        // Move to the ending position
        for (int i = left; i <= right; i++) {
            prev2 = curr2;
            curr2 = curr2->next;
        }

        prev2->next = nullptr;  // disconnect the sublist

        // Reverse the sublist
        ListNode* prev = nullptr;
        ListNode* temp = curr1;
        while (temp != nullptr) {
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }

        // Connect the reversed sublist back to the main list
        prev1->next = prev;
        curr1->next = curr2;

        return dummy->next;  // return the updated head
    }
};

// class Solution {
// public:
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         if(head==NULL || head->next==NULL || left>=right)
//             return head;
//         ListNode* curr1=head;
//         // ListNode* temp=curr->next;
//         ListNode* prev1=nullptr;
//         ListNode* curr2=head;
//         ListNode* prev2=nullptr;
//         while(left-->1){
//             // cout<<left<<" ";
//             prev1=curr1;
//             curr1=curr1->next;
//         }
//         // cout<<endl;
//         while(right-->1){
//             // cout<<right<<" ";
//             // prev2=curr2;
//             curr2=curr2->next;
//         }
//         prev2=curr2->next;  // save 5
//         curr2->next=NULL;
//         curr2=curr1;
//         {
//             ListNode* prev=nullptr;
//             ListNode* temp=curr1;
//             while(temp!=NULL){
//                 temp=temp->next;
//                 curr1->next=prev;
//                 // temp->next=curr1;
//                 prev=curr1;
//                 curr1=temp;
//             }
//             prev1->next=prev;
//         }
//         curr2->next=prev2;
//         return head;
//     }
// };