/*
 * Problem #112: Path Sum
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 24/11/2025, 11:49:46
 * Link: https://leetcode.com/problems/path-sum/
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        else if(!root->left && !root->right) return targetSum - root->val == 0;
        int curSum = targetSum - root->val;
        return hasPathSum(root->left,curSum) || hasPathSum(root->right,curSum);
    }
};
