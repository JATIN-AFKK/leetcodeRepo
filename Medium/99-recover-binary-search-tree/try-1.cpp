/*
 * Problem #99: Recover Binary Search Tree
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/03/2026, 23:29:16
 * Link: https://leetcode.com/problems/recover-binary-search-tree/
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
    vector<TreeNode*> store;
    void inorder(TreeNode* root){
        if(root == nullptr) return;

        inorder(root -> left);
        store.push_back(root);
        inorder(root -> right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        int i = 0, j = store.size() - 1;
        while(i < store.size() - 1 && (store[i] -> val) < (store[i + 1] -> val)) i++;
        while(j >= 1 && store[j] -> val > store[j - 1] -> val) j--;

        swap(store[i] -> val, store[j] -> val);
    }
};
