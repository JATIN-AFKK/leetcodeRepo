/*
 * Problem #117: Populating Next Right Pointers in Each Node II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 04/01/2025, 18:47:26
 * Link: https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/
 */

"""
# Definition for a Node.
class Node:
    def __init__(self, val: int = 0, left: 'Node' = None, right: 'Node' = None, next: 'Node' = None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""

class Solution:
    def connect(self, root: 'Node') -> 'Node':
        if root is None:
            return 
        dq = deque([root])
        while dq:
            length = len(dq)
            pre = None
            for _ in range(length):
                element = dq.popleft()
                if pre:
                    pre.next = element
                pre = element
                if element.left:
                    dq.append(element.left)
                if element.right:
                    dq.append(element.right)
            pre.next = None
        return root

        
