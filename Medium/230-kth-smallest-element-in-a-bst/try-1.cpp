/*
 * Problem #230: Kth Smallest Element in a BST
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/03/2026, 00:37:28
 * Link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/
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
    int ans, count = 0;
    void inorder(TreeNode* root, int k){
        if(root == nullptr || count == k) return;
        inorder(root -> left, k);
        
        this -> count++;
        if(count == k) ans = root -> val;

        inorder(root -> right, k);

    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return this -> ans;
    }
};
