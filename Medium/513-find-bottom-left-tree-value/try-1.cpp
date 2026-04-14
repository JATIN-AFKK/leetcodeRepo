/*
 * Problem #513: Find Bottom Left Tree Value
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/03/2026, 12:18:14
 * Link: https://leetcode.com/problems/find-bottom-left-tree-value/
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
    int ans , max_depth = -1;
    void dfs(TreeNode* root, int depth){
        if(root == nullptr) return;

        dfs(root -> left, depth + 1);
        dfs(root -> right, depth + 1);

        if(max_depth < depth){
            max_depth = depth;
            ans = root -> val;
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
};
