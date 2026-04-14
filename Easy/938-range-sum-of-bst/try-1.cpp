/*
 * Problem #938: Range Sum of BST
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/03/2026, 14:46:08
 * Link: https://leetcode.com/problems/range-sum-of-bst/
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
    int ans = 0;
    int low, high;
    void inorder(TreeNode* root){
        if(root == nullptr) return;

        inorder(root -> left);
        if(root -> val >= low && root -> val <= high) ans += root -> val;
        inorder(root -> right);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        this -> ans = 0;
        this -> low = low;
        this -> high = high;
        inorder(root);
        return ans;
    }
};
