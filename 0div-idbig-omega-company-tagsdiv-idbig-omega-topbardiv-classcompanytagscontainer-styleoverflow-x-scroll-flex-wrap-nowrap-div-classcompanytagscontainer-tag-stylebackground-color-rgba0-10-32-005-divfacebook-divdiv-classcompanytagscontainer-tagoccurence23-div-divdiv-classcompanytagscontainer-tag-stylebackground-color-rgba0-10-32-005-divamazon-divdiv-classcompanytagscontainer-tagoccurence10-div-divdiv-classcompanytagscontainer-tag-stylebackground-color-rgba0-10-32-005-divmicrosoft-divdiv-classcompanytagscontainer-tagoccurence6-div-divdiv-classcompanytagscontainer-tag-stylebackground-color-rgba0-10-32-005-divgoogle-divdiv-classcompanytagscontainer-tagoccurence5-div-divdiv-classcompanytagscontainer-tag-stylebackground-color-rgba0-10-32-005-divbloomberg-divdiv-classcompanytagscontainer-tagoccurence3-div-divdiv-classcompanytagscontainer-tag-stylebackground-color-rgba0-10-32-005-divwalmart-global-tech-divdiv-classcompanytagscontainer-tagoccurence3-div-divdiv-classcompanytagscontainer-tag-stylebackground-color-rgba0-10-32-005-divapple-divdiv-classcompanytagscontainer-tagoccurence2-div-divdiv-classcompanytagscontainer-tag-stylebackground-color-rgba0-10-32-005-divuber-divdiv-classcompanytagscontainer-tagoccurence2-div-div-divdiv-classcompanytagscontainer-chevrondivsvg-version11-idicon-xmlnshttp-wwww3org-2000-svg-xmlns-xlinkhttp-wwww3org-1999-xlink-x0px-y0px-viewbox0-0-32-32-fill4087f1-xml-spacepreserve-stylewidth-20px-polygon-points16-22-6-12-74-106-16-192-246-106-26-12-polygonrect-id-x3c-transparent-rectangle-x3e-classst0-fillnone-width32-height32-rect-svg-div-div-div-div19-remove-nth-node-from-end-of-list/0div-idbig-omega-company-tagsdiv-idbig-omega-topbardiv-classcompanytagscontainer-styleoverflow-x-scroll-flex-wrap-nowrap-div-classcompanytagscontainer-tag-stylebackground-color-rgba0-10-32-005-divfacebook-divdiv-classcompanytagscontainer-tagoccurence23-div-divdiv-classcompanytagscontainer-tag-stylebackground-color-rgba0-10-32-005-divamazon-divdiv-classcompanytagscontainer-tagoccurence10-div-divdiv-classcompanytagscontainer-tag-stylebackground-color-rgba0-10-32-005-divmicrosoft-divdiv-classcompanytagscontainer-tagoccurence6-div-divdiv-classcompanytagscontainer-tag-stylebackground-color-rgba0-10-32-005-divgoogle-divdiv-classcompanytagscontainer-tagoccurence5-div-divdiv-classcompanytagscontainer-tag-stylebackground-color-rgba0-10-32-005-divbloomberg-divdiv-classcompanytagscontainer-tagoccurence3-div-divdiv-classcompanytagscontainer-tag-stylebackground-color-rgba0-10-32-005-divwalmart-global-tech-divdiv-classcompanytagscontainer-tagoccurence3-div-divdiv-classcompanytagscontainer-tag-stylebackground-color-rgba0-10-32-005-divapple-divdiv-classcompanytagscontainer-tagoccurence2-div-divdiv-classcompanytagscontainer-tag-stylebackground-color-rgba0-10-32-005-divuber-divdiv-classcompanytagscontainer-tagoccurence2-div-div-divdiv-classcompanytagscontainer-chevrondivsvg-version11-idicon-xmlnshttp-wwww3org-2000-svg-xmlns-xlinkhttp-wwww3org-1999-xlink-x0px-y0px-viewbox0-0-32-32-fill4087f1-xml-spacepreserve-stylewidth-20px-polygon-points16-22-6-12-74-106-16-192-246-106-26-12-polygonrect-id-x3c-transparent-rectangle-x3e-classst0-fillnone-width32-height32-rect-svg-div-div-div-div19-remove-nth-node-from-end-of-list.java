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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int m=0;
        ListNode dummy=new ListNode(0);
        dummy.next=head;
        ListNode slow=dummy;
        while(slow!=null){
            slow=slow.next;
            m++;
        }
        // if(m==1) return null;
        System.out.println(m+" "+(m-n)+" "+n);
        slow=dummy;
        while(m-n>1){
            System.out.println(m+" - ");
            slow=slow.next;
            System.out.println(slow.val);
            m--;
        }
        if(slow.next!=null){
            slow.next=slow.next.next;
        }
        return dummy.next;
    }
}