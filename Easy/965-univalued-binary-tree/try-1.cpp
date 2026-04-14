/*
 * Problem #965: Univalued Binary Tree
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/03/2026, 14:55:35
 * Link: https://leetcode.com/problems/univalued-binary-tree/
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
    TreeNode* pre = nullptr;
    bool ans = true;

    bool isUnivalTree(TreeNode* root) {
        if(root == nullptr) return true;
        isUnivalTree(root -> left);
        if(pre && pre -> val != root -> val) ans = false;
        pre = root;
        isUnivalTree(root -> right);

        return ans;
    }
};
