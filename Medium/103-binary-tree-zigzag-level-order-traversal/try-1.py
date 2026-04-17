/*
 * Problem #103: Binary Tree Zigzag Level Order Traversal
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 07/01/2025, 18:08:56
 * Link: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if root is None :
            return []
        dq = deque([root])
        level = 0
        result = []
        while dq:
            length = len(dq)
            l1 = []
            if level %2 == 0:
                for _ in range(length):
                    element = dq.popleft()
                    l1.append(element.val)
                    if element.left:
                        dq.append(element.left)
                    if element.right:
                        dq.append(element.right)
                result.append(l1)
                level+=1
            else:
                for _ in range(length):
                    element = dq.pop()
                    l1.append(element.val)
                    if element.right:
                        dq.appendleft(element.right)
                    if element.left:
                        dq.appendleft(element.left)
                result.append(l1)
                level+=1
        return result
            
                    


