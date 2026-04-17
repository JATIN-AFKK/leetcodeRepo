/*
 * Problem #1448: Count Good Nodes in Binary Tree
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/11/2025, 16:00:21
 * Link: https://leetcode.com/problems/count-good-nodes-in-binary-tree/
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
    int goodNodes(TreeNode* root) {
        return dfs(root,INT_MIN);
    }
    int dfs(TreeNode* root,int curState){
        if(!root) return 0;
        int count = (curState <= root->val);
        int nextState = max(curState,root->val);

        int left = dfs(root->left,nextState);
        int right = dfs(root->right,nextState);

        return count + left + right;
    }
};
