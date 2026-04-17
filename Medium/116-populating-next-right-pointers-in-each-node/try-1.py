/*
 * Problem #116: Populating Next Right Pointers in Each Node
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 04/01/2025, 18:34:34
 * Link: https://leetcode.com/problems/populating-next-right-pointers-in-each-node/
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
    def connect(self, root: 'Optional[Node]') -> 'Optional[Node]':
        if root is None :
            return 
        dq = deque([root])
        while dq:
            no_element = len(dq)
            pre = None
            for i in range(no_element):
                node = dq.popleft()
                if pre:
                    pre.next = node
                pre = node
                if node.left:
                    dq.append(node.left)
                    dq.append(node.right)
            
            pre.next = None
        return root




        
        
