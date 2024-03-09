/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode temp=null;
        ListNode slow=head;
        ListNode fast=head;
        while(fast!=null){
            fast=fast.next;
            slow.next=temp;
            temp=slow;
            slow=fast;
        }
        return temp;
    }
}