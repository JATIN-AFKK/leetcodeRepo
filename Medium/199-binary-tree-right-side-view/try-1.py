/*
 * Problem #199: Binary Tree Right Side View
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 03/01/2025, 16:52:12
 * Link: https://leetcode.com/problems/binary-tree-right-side-view/
 */

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        if root == None :
            return []
        dq = deque([root])
        result = []
        while dq:
            e_level = len(dq)
            for _ in range(e_level-1):
                element = dq.popleft()
                if element.left :
                    dq.append(element.left)
                if element.right :
                    dq.append(element.right)
            element = dq.popleft()
            result.append(element.val)
            if element.left :
                dq.append(element.left)
            if element.right :
                dq.append(element.right)
        return result
        
            



        
