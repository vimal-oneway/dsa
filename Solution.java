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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode result = new ListNode(0);
        ListNode temp = result;
        ListNode head = result;
        
        int carry = 0;
        while(l1 != null || l2 != null){
            int sum = carry;

            if(l1 != null){
                sum+=l1.val;
                l1=l1.next;
            }else{}


            if(l2 != null){
                sum+=l2.val;
                l2=l2.next;
            }
 
            temp.next=new ListNode(sum >=10? sum%10:sum);
            carry=sum/10;
            temp=temp.next;
        }

        if(carry>0){
            temp.next  = new ListNode(carry);
        }

        return result.next;
    }
}
