/*
 * Problem #865: Smallest Subtree with all the Deepest Nodes
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/01/2026, 11:34:11
 * Link: https://leetcode.com/problems/smallest-subtree-with-all-the-deepest-nodes/
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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        return dfs(root).second;
    }

    pair<int , TreeNode*> dfs(TreeNode* node){
        if(!node) return {0, NULL};
        pair<int, TreeNode*> L = dfs(node->left);
        pair<int, TreeNode*> R = dfs(node->right);

        if(L.first == R.first) return {L.first + 1, node};
        else if (L.first > R.first) return {L.first + 1, L.second};
        else return {R.first + 1, R.second};
    }
};
