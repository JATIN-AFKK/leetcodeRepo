/*
 * Problem #2331: Evaluate Boolean Binary Tree
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/11/2025, 16:59:26
 * Link: https://leetcode.com/problems/evaluate-boolean-binary-tree/
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
    bool evaluateTree(TreeNode* root) {
        if(!root->left && !root->right) return root->val;
        bool left = evaluateTree(root->left);
        bool right = evaluateTree(root->right);

        if(root -> val == 2) return left | right;
        else return left & right;
    }
};
