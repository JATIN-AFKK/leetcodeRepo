/*
 * Problem #617: Merge Two Binary Trees
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/03/2026, 18:36:24
 * Link: https://leetcode.com/problems/merge-two-binary-trees/
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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root2 == nullptr) return root1;
        else if(root1 == nullptr) return root2;

        TreeNode* newhead = new TreeNode(root1 -> val + root2 -> val);
        newhead -> left = mergeTrees(root1 -> left, root2 -> left);
        newhead -> right = mergeTrees(root1 -> right, root2 -> right);

        return newhead;
    }
};
