/*
 * Problem #543: Diameter of Binary Tree
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 20/11/2025, 18:40:45
 * Link: https://leetcode.com/problems/diameter-of-binary-tree/
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
    int val = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        path(root);
        return val;
    }
    int path(TreeNode* root){
        if(!root) return 0;
        int left = path(root->left);
        int right = path(root->right);
        val = max(val,left + right);
        return max(left,right) + 1;

    }
};
