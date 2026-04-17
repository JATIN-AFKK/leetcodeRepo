/*
 * Problem #297: Serialize and Deserialize Binary Tree
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 07/01/2025, 22:42:57
 * Link: https://leetcode.com/problems/serialize-and-deserialize-binary-tree/
 */

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Codec:

    def serialize(self, root):
        """Encodes a tree to a single string.
        
        :type root: TreeNode
        :rtype: str
        """
        if not root :
            return ''
        dq = deque([root])

        l1 = []
        while dq:

            ele = dq.popleft()
            if ele is None:
                l1.append('None')
                
            else:
                l1.append(str(ele.val))
                dq.append(ele.left)
                dq.append(ele.right)
        

        while l1 and l1[-1] == 'None':
            l1.pop()
        return ','.join(l1)
        


        
        

    def deserialize(self, data):
        node = data.split(',')
        if data == '':
            return None
        root = TreeNode(int(node[0]))
        dq = deque([root])
        index = 1
        while dq:
            eel = dq.popleft()

            if index<len(node) and node[index]!='None':
                eel.left = TreeNode(int(node[index]))
                dq.append(eel.left)
            index+=1
            if index<len(node) and node[index]!='None':
                eel.right = TreeNode(int(node[index]))
                dq.append(eel.right)
            index+=1
        return root
            
        
        
        
        

# Your Codec object will be instantiated and called as such:
# ser = Codec()
# deser = Codec()
# ans = deser.deserialize(ser.serialize(root))
