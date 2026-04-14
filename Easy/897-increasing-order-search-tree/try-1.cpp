/*
 * Problem #897: Increasing Order Search Tree
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/03/2026, 21:55:50
 * Link: https://leetcode.com/problems/increasing-order-search-tree/
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
    TreeNode* increasingBST(TreeNode* root) {
        if(root == nullptr) return nullptr;
        TreeNode* left = increasingBST(root -> left);
        TreeNode* right = increasingBST(root -> right);

        TreeNode* dummy = left;
        while(dummy && dummy -> right){
            dummy = dummy -> right;
        }
        if(left){
            dummy -> right = root;
            root -> right = right;
            root -> left = nullptr;
            return left;
        }
        else if(right){
            root -> right = right;
            root -> left = nullptr;
            return root;
        }
        else return root;
    }
};
