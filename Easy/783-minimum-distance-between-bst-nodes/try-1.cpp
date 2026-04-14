/*
 * Problem #783: Minimum Distance Between BST Nodes
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/03/2026, 21:36:52
 * Link: https://leetcode.com/problems/minimum-distance-between-bst-nodes/
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
        if(pre) ans = min(ans, abs(pre -> val - root -> val));
        pre = root;
        inorder(root -> right);
    }
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        return ans;
    }
};
