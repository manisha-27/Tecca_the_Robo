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
    public List<List<Integer>> levelOrder(TreeNode root) {
        if(root==null)
            return new ArrayList<>();
        Queue<TreeNode> qe = new LinkedList<>();
        List<List<Integer>> ans = new ArrayList<>();
        qe.add(root);
        while(!qe.isEmpty()){
            int len=qe.size();
            List<Integer> arr=new ArrayList<>();
            while(len>0){
                TreeNode node=qe.peek();
                if(node.left!=null){
                    qe.add(node.left);
                }
                if(node.right!=null){
                    qe.add(node.right);
                }
                arr.add(node.val);
                qe.remove();
                len--;
            }
            ans.add(arr);
        }
        return ans;
    }
}