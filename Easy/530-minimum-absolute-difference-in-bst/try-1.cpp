/*
 * Problem #530: Minimum Absolute Difference in BST
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/03/2026, 17:59:15
 * Link: https://leetcode.com/problems/minimum-absolute-difference-in-bst/
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
    int ans = INT_MAX;
    TreeNode* pre = nullptr;

    void inorder(TreeNode* root){
        if(root == nullptr) return;

        inorder(root -> left);

        if(pre) ans = min(ans, root->val - pre -> val);
        pre = root;

        inorder(root -> right);
    }

    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        return ans;
    }
};
