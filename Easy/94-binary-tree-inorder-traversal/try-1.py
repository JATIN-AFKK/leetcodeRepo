/*
 * Problem #94: Binary Tree Inorder Traversal
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 01/01/2025, 18:12:20
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
        l1=[]
        def k(ro : Optional[TreeNode]):
            if ro == None:
                return
            k(ro.left)
            l1.append(ro.val)
            k(ro.right)
        k(root)
        return l1
        
