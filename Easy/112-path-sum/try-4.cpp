/*
 * Problem #112: Path Sum
 * Difficulty: Easy
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 24/11/2025, 11:59:01
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
        return dfs(root,0,targetSum);
    }
    bool dfs(TreeNode* root,int preSum,int target){
        if(!root) return false;
        if(!root->left && !root->right) return preSum + root->val == target;
        preSum = preSum + root->val;

        return dfs(root->left,preSum,target) | dfs(root->right,preSum,target);
    }
};
