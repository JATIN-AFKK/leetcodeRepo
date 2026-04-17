/*
 * Problem #1457: Pseudo-Palindromic Paths in a Binary Tree
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/11/2025, 16:29:39
 * Link: https://leetcode.com/problems/pseudo-palindromic-paths-in-a-binary-tree/
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
    int pseudoPalindromicPaths (TreeNode* root) {
        return dfs(root,0);
    }
    int dfs(TreeNode* root, int bitState){
        if(!root) return 0;
        int nextState = bitState ^ (1 << (root->val - 1));

        if(!root->left && !root->right) return (nextState == 0) || ((nextState - 1) & nextState) == 0;

        int left = dfs(root -> left,nextState);
        int right = dfs(root -> right,nextState);

        return left + right;
    }
};
