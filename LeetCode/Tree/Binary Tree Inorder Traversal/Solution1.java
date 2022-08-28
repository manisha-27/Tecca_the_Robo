class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        Stack<TreeNode> st=new Stack<TreeNode>();
        List<Integer> li=new ArrayList<>();
        if(root==null)
            return li;
        // st.push(root);
        // root=root.left;
        while(true){
            // root=st.peek();
            if(root!=null){
                st.push(root);
                root=root.left;
            }else{
                if(st.isEmpty())
                    break;
                root=st.pop();
                li.add(root.val);
                // root=null;
                // root=st.pop();
                // li.add(root.val);
                // if(root.right!=null)
                root=root.right;
            }
            // else{
            //     li.add(st.pop().val);
            //     root=root.right;
            // }
        }
        // li.add(st.pop().val);
        return li;
    }
}

// Commented Lines are the errors I did.
