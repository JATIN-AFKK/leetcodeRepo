/*
 * Problem #112: Path Sum
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 02/01/2025, 22:58:29
 * Link: https://leetcode.com/problems/path-sum/
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        if root == None:
            return False
        if root.left == None and root.right == None:
            if targetSum == root.val:
                return True
            else:
                return False
        
        return (self.hasPathSum(root.left,targetSum - root.val) or self.hasPathSum(root.right,targetSum - root.val))




