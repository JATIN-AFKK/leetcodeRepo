/*
 * Problem #1379: Find a Corresponding Node of a Binary Tree in a Clone of That Tree
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/03/2026, 15:14:59
 * Link: https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    void inorder(TreeNode* original, TreeNode* cloned, TreeNode* target){
        if(original == nullptr && cloned == nullptr) return;
        inorder(original->left, cloned -> left, target);

        if(cloned -> val == target -> val) ans = cloned;

        inorder(original -> right, cloned -> right, target);
     }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        inorder(original, cloned, target);
        return ans;
    }
};
