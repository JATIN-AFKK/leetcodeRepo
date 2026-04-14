/*
 * Problem #563: Binary Tree Tilt
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/03/2026, 18:06:37
 * Link: https://leetcode.com/problems/binary-tree-tilt/
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
    int tilt_ = 0;
    int dfs(TreeNode* root){
        if(root == nullptr) return 0;
        int leftSum = dfs(root -> left);
        int rightSum = dfs(root -> right);

        tilt_ += abs(leftSum - rightSum);
        return leftSum + rightSum + root->val;
    }
    int findTilt(TreeNode* root) {
        dfs(root);
        return tilt_;
    }
};
