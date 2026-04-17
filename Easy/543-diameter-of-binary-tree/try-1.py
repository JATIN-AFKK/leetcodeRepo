/*
 * Problem #543: Diameter of Binary Tree
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 03/01/2025, 16:39:20
 * Link: https://leetcode.com/problems/diameter-of-binary-tree/
 */


# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        length = 0
        def path_per_node(rot : Optional[TreeNode]):
            nonlocal length
            if rot == None:
                return 0
            _left =  path_per_node(rot.left)
            _right = path_per_node(rot.right)
            length = max(length,_left+_right)
            return 1 + max(_left,_right)
        path_per_node(root)
        return length
        
