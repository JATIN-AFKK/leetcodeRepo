/*
 * Problem #687: Longest Univalue Path
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/11/2025, 13:35:04
 * Link: https://leetcode.com/problems/longest-univalue-path/
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
    int longestUnivaluePath(TreeNode* root) {
        int curMax = 0;
        MaxLen(root,curMax);
        return max(curMax - 1,0);
    }
    int MaxLen(TreeNode* root,int &curMax){
        if(!root) return 0;
        int left = MaxLen(root->left , curMax);
        int right = MaxLen(root->right , curMax);

        int leftchain = 0,rightchain = 0;
        if(root->left && root->val == root->left->val) leftchain = left;
        if(root->right && root->val == root->right->val) rightchain = right;

        int total = 1 + leftchain + rightchain;
        curMax = max(curMax,total);
        return max(leftchain,rightchain) + 1; 
    }
};
