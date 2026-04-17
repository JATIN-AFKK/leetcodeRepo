/*
 * Problem #124: Binary Tree Maximum Path Sum
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 02/01/2025, 20:59:53
 * Link: https://leetcode.com/problems/binary-tree-maximum-path-sum/
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        ans = -float('inf')
        def path_per_node(_root: Optional[TreeNode]):
            nonlocal ans
            if _root == None :
                return 0
            left = path_per_node(_root.left)
            right = path_per_node(_root.right)
            max_path = max(max(_root.val,_root.val+left),max(_root.val+left+right,_root.val+right))
            ans = max(ans,max_path)
            return max(_root.val,max(_root.val+left,_root.val+right))
        path_per_node(root)
        return ans

        
