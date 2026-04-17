/*
 * Problem #102: Binary Tree Level Order Traversal
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 02/01/2025, 17:34:05
 * Link: https://leetcode.com/problems/binary-tree-level-order-traversal/
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if root == None :
            return []
        re = []
        dq = deque([root])
        while dq:
            l1 = []
            no_element_level = len(dq)
            for _ in range(no_element_level):
                ele = dq.popleft()
                l1.append(ele.val)
                if ele.left:
                    dq.append(ele.left)
                if ele.right:
                    dq.append(ele.right)
            re.append(l1)
        
        return re
                

            
