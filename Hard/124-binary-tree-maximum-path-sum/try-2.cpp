/*
 * Problem #124: Binary Tree Maximum Path Sum
 * Difficulty: Hard
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 20/11/2025, 19:00:58
 * Link: https://leetcode.com/problems/binary-tree-maximum-path-sum/
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
    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;
        dfs(root,sum);
        return sum;
    }
    int dfs(TreeNode* root, int &maxVal){
        if(!root) return 0;
        int left = dfs(root->left,maxVal);
        int right = dfs(root->right,maxVal);
        maxVal = max({maxVal,
                    left + root->val,
                    right + root->val,root->val,
                    left + right + root->val
        });

        return max({left,right,0}) + root->val;
    }
};
