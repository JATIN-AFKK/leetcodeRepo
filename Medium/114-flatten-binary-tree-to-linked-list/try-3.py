/*
 * Problem #114: Flatten Binary Tree to Linked List
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: python3
 * Date: 07/01/2025, 17:54:00
 * Link: https://leetcode.com/problems/flatten-binary-tree-to-linked-list/
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def flatten(self, root: Optional[TreeNode]) -> None:
        """
        Do not return anything, modify root in-place instead.
        """
        if root == None:
            return
        
        self.flatten(root.left)
        self.flatten(root.right)

        temp = root.right
        root.right = root.left
        root.left = None
        current = root

        while current.right:
            current = current.right
        current.right = temp

