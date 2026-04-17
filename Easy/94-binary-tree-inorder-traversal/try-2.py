/*
 * Problem #94: Binary Tree Inorder Traversal
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: python3
 * Date: 01/01/2025, 18:39:25
 * Link: https://leetcode.com/problems/binary-tree-inorder-traversal/
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        dq = deque()
        re = []
        current = root
        while current or dq:
            while current:
                dq.append(current)
                current = current.left
            last = dq.pop()
            re.append(last.val)
            current = last.right
        return re


        
