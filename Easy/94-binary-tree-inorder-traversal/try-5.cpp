/*
 * Problem #94: Binary Tree Inorder Traversal
 * Difficulty: Easy
 * Submission: Try 5
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 22:32:36
 * Link: https://leetcode.com/problems/binary-tree-inorder-traversal/
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*>  st;
        if(root == NULL){
            return result;
        }
        TreeNode* node = root;
        
        while(true){
            if(node){
                st.push(node);
                node = node->left;
            }
            else{
                if(st.empty()) return result;
                result.push_back(st.top()->val);
                node = st.top()->right;
                st.pop();
            }
            

        }
    }
};
