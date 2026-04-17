/*
 * Problem #94: Binary Tree Inorder Traversal
 * Difficulty: Easy
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 11/03/2025, 17:16:39
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
        vector<int> vec;
        inorder(root,vec);
        return vec;
    }
    void inorder(TreeNode* node, vector<int> & result){
        if(node != nullptr){
            inorder(node->left,result);
            result.push_back(node->val);
            inorder(node->right,result);
        }
    }
};
