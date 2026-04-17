/*
 * Problem #101: Symmetric Tree
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 01/01/2025, 17:24:56
 * Link: https://leetcode.com/problems/symmetric-tree/
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        dq = deque()
        dq.append((root.left,root.right))
        while dq :
            l,r = dq.popleft()
            if l== None and r == None:
                continue
            elif l== None or r == None:
                return False
            elif l.val != r.val:
                return False

            dq.append((l.left,r.right))
            dq.append((l.right,r.left))
        
        return True

            
