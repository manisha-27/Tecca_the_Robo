# PreOrder Traversal
## (Root->Left->Right)

![image](https://user-images.githubusercontent.com/67019423/187026293-0251ee4b-19ed-4bc7-80ef-ab2969b380a4.png)
<br>
Input: root = [1,2,4,null,null,5, null, null,3]<br>
Output: [1,2,4,5,3]

## Algorithm

1. Create a Stack(Stack<TreeNode> st) and a list(List<Integer> li).
2. Store root value into the stack.
3. Start a loop until Stack becomes empty.
4. Pop() stack value = current, store it in the list.
5. Store current's 1st. it's right value then left value into the stack.
6. Considering Stack.peek() everytime the root follow 4 to 6 steps until stack becomes Empty.
7. Print list.
