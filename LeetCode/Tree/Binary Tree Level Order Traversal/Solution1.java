/** //Added Binary Tree Node Defination for Reference
 * Definition for a binary tree node.
 * public class TreeNode{
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
    public List<List<Integer>> levelOrder(TreeNode root) {
        Queue<TreeNode> qu=new LinkedList<>();
        List<List<Integer>> list=new ArrayList<>();
        if(root==null)
            return list;
        qu.offer(root);
        while(!qu.isEmpty()){
            int n=qu.size();
            List<Integer> li=new ArrayList<>();
            for(int i=0;i<n;i++){
                root=qu.peek();
                if(root.left!=null)
                    qu.offer(root.left);
                if(root.right!=null)
                    qu.offer(root.right);
                li.add(qu.poll().val);
            }
            list.add(li);
        }
        return list;
    }
}
