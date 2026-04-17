/*
 * Problem #145: Binary Tree Postorder Traversal
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 02/01/2025, 18:42:11
 * Link: https://leetcode.com/problems/binary-tree-postorder-traversal/
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        l1 = []
        if root:
            l1+=self.postorderTraversal(root.left)
            l1+=self.postorderTraversal(root.right)
            l1.append(root.val)
        return l1

        
