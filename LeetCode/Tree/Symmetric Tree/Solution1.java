/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isSymmetric(TreeNode root) {
        TreeNode p=root.left;
        TreeNode q=root.right;
        if(p==null && q==null)
            return true;
        if((p==null && q!=null) || (p!=null && q==null))
            return false;
        Stack<TreeNode> st1=new Stack<>();
        Stack<TreeNode> st2=new Stack<>();
        st1.push(p);
        st2.push(q);
        while(!st1.isEmpty() && !st2.isEmpty()){
            p=st1.pop();
            q=st2.pop();
            if((p==null && q!=null) || (p!=null && q==null))
                return false;
            if(p==null && q==null)
             continue;
            if(p.val==q.val){
                // System.out.println("Hello");
                if((p.right==null && q.left!=null) || (p.right!=null && q.left==null))
                return false;
                if((p.left==null && q.right!=null) || (p.left!=null && q.right==null))
                return false;
                st1.push(p.right);
                st1.push(p.left);
                st2.push(q.left);
                st2.push(q.right);
            }else
                return false;
        }
        if((st1.isEmpty() && !st2.isEmpty()) || (!st1.isEmpty() && st2.isEmpty()))
            return false;
        return true;
    }
}

// [1,2,2,null,3,3]

// Runtime: 3 ms, faster than 11.77% of Java online submissions for Symmetric Tree.
// Memory Usage: 42.5 MB, less than 32.06% of Java online submissions for Symmetric Tree.
