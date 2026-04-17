/*
 * Problem #114: Flatten Binary Tree to Linked List
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: python3
 * Date: 04/01/2025, 18:09:54
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
        if root is None :
            return
        stac = [root]
        pre = None
        while stac:
            node = stac.pop()
            if node.right:
                stac.append(node.right)
            if node.left :
                stac.append(node.left)
            if pre:
                pre.right = node
                pre.left = None
            
            pre = node
            




    


        




        



        
