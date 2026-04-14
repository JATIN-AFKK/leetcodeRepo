/*
 * Problem #111: Minimum Depth of Binary Tree
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/03/2026, 13:46:50
 * Link: https://leetcode.com/problems/minimum-depth-of-binary-tree/
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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        if(root -> left == nullptr && root -> right == nullptr) return 1;
        else if(root -> left == nullptr) return 1 + minDepth(root -> right);
        else if(root -> right == nullptr) return 1 + minDepth(root -> left);
        return 1 + min(minDepth(root->left), minDepth(root -> right));
    }
};
