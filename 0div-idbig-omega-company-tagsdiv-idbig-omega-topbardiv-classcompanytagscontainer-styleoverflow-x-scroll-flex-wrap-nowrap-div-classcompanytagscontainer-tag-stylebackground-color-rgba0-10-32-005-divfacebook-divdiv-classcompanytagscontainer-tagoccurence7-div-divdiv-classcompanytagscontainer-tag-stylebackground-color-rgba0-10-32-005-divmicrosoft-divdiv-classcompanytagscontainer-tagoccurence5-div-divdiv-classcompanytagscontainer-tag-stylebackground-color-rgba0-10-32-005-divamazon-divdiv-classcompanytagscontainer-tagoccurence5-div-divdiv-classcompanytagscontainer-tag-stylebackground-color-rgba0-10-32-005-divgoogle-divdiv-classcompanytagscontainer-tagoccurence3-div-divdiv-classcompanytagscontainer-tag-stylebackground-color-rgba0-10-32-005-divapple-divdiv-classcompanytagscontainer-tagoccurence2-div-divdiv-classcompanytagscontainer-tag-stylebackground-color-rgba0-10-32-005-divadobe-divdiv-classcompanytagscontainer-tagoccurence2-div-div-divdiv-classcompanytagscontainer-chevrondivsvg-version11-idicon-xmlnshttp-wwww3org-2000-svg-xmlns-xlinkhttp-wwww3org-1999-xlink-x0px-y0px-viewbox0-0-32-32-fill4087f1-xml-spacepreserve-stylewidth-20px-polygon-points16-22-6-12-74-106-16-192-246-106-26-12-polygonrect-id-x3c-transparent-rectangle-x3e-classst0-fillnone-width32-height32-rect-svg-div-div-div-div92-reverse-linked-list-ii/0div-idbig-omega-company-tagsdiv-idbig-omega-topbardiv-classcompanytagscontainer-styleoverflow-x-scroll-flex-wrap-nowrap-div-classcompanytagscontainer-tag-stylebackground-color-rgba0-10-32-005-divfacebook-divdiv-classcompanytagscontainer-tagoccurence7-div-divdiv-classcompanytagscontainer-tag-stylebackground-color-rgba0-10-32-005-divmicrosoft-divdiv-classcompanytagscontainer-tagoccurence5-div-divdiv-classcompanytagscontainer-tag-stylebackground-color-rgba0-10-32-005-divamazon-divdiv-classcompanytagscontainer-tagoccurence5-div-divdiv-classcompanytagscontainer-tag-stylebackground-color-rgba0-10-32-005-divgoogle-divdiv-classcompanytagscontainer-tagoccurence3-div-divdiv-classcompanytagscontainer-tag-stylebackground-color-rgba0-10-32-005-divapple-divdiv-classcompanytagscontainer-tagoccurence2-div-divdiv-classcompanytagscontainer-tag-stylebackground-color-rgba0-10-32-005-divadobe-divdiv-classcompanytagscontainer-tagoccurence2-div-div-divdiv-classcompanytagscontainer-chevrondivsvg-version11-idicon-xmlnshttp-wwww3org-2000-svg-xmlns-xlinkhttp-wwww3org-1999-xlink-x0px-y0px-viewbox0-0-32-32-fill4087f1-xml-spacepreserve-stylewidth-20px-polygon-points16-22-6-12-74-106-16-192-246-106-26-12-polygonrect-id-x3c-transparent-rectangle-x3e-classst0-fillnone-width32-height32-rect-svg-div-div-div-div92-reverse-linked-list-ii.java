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
    public void reverse(ListNode curr){
        ListNode prev=null;
        // ListNode curr=root;
        ListNode temp=curr;
        while(temp!=null){
            temp=temp.next;
            curr.next=prev;
            prev=curr;
            curr=temp;
        }
        // curr
        // return prev;
    }
    public ListNode reverseBetween(ListNode head, int left, int right) {
        ListNode dummy=new ListNode(0);
        dummy.next=head;
        ListNode lt=head;
        ListNode rt=head;
        ListNode pll=dummy;
        ListNode prr=head;
        while(left>1){
            pll=lt;
            lt=lt.next;
            left--;
        }
        while(right>1){
            // prr=rt;
            rt=rt.next;
            right--;
        }
        prr=rt.next;
        rt.next=null;
        if(pll==lt)
        pll.next=null;
        reverse(lt);
        pll.next=rt;
        lt.next=prr;
        // System.out.println()
        return dummy.next;
    }
}