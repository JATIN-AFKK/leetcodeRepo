/*
 * Problem #98: Validate Binary Search Tree
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 07/01/2025, 23:08:32
 * Link: https://leetcode.com/problems/validate-binary-search-tree/
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        def validate(node ,low = -float('inf'),high = float('inf')):
            if node == None:
                return True
            if not(low < node.val < high):
                return False
            
            return validate(node.left,low,node.val) and validate(node.right,node.val,high)
        return validate(root)
        
            
        
