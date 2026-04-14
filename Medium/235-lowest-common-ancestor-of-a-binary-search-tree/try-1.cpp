/*
 * Problem #235: Lowest Common Ancestor of a Binary Search Tree
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/03/2026, 11:25:54
 * Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    bool solve(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root == nullptr) return false;

        auto left = solve(root -> left, p, q);
        auto right = solve(root -> right, p , q);

        bool isVal = (root -> val == p -> val) || (root -> val == q -> val);

        if(left && isVal || right && isVal || left && right){
            ans = root;
            return true;
        }
        return left || right || isVal;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        solve(root, p, q);
        return ans;
    }
};
