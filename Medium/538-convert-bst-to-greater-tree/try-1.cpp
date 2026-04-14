/*
 * Problem #538: Convert BST to Greater Tree
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/03/2026, 12:52:08
 * Link: https://leetcode.com/problems/convert-bst-to-greater-tree/
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
    int sum = 0;
    void reversePre(TreeNode* root){
        if(root == nullptr) return;
        reversePre(root -> right);
        
        sum += root -> val;
        root -> val = sum;

        reversePre(root -> left);
    }
    TreeNode* convertBST(TreeNode* root) {
        reversePre(root);
        return root;
    }
};
