/*
 * Problem #1372: Longest ZigZag Path in a Binary Tree
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/11/2025, 19:24:00
 * Link: https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree/
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
    int longestZigZag(TreeNode* root) {
        int res = 0;
        healper(root,res);
        return res;
    }
    pair<int,int> healper(TreeNode* root,int &maxVal){
        if(!root) return {-1,-1};
        pair<int,int> left = healper(root->left,maxVal);
        pair<int,int> right = healper(root->right, maxVal);


        maxVal = max({maxVal,left.second + 1 , right.first + 1});
        return {left.second + 1 , right.first + 1};
    }
};
