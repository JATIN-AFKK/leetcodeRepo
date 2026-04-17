/*
 * Problem #236: Lowest Common Ancestor of a Binary Tree
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 04/01/2025, 18:49:42
 * Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        if root == None :
            return None
        if root == p or root == q :
            return root
            
        left = self.lowestCommonAncestor(root.left ,p ,q)
        right = self.lowestCommonAncestor(root.right ,p ,q)

        if left !=None and right != None:
            return root
            
        if left != None :
            return left
        else :
            return right
        
            

        




        

        
