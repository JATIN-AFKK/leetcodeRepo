/*
 * Problem #100: Same Tree
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: python3
 * Date: 01/01/2025, 17:49:10
 * Link: https://leetcode.com/problems/same-tree/
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        dq_p = deque([p])
        dq_q = deque([q])
        while dq_p and dq_q :
            p1 = dq_p.popleft()
            q1 = dq_q.popleft()
            print(p1,q1)
            if p1 == None and q1 == None:
                continue
            elif (p1 == None or q1 == None) or ( p1.val != q1.val ):
                return False
        
            dq_p.append(p1.left)
            dq_p.append(p1.right)
            dq_q.append(q1.left)
            dq_q.append(q1.right)
        return True

