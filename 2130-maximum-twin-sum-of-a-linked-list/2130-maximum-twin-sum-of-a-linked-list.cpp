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
    int pairSum(ListNode* head) {
        stack<int> st;
        queue<int> q;
        int n=0;
        while(head){
            st.push(head->val);
            q.push(head->val);
            head=head->next;
            n++;
        }
        int maxi=0;
        n=n/2;
        while(n>0){
            int a=st.top();
            int b=q.front();
            st.pop();q.pop();
            maxi=max(maxi,a+b);
            n--;
        }
        return maxi;
    }
};
// 1 2 3 4 5 6 7 8

// class Solution {
// public:
//     int pairSum(ListNode* head) {
//         stack<ListNode*> st;  // Use pointers to store ListNode objects
//         queue<ListNode*> q;   // Use pointers to store ListNode objects

//         // Split the linked list into two halves
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while (fast != nullptr && fast->next != nullptr) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         // Reverse the second half of the linked list
//         ListNode* prev = nullptr;
//         ListNode* current = slow;
//         while (current != nullptr) {
//             ListNode* nextNode = current->next;
//             current->next = prev;
//             prev = current;
//             current = nextNode;
//         }
        
//         // Update the head of the second half
//         slow = prev;

//         int maxi = INT_MIN;

//         // Traverse both halves and find the maximum pair sum
//         while (head != nullptr && slow != nullptr) {
//             int sum = head->val + slow->val;
//             maxi = max(maxi, sum);

//             // Move to the next nodes
//             head = head->next;
//             slow = slow->next;
//         }

//         return maxi;
//     }
// };
