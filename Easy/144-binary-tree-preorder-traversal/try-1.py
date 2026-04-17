/*
 * Problem #144: Binary Tree Preorder Traversal
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 02/01/2025, 17:43:53
 * Link: https://leetcode.com/problems/binary-tree-preorder-traversal/
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        result = []
        def traverse(_root : Optional[TreeNode]):
            if _root == None:
                return
            result.append(_root.val)
            traverse(_root.left)
            traverse(_root.right)
        traverse(root)
        return result

        
