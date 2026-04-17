/*
 * Problem #110: Balanced Binary Tree
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 21/11/2025, 13:05:05
 * Link: https://leetcode.com/problems/balanced-binary-tree/
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
    bool isBalanced(TreeNode* root) {
        return healper(root).first;
    }

    pair<bool,int> healper(TreeNode* root){
        if(!root) return {true,0};
        pair<bool,int> left = healper(root->left);
        pair<bool,int> right = healper(root->right);

        bool condition = (abs(left.second - right.second) < 2);
        bool state = left.first & right.first & condition;
        int depth = max(left.second,right.second) + 1;

        return {state,depth};
    }
};
