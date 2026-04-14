/*
 * Problem #1022: Sum of Root To Leaf Binary Numbers
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 25/02/2026, 01:07:01
 * Link: https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/
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
    int sumRootToLeaf(TreeNode* root) {
        vector<int> ansStore;
        dfs(ansStore, root, 0);
        return accumulate(ansStore.begin(), ansStore.end(), 0);
    }
    void dfs(vector<int> & store, TreeNode* root, int val){
        val = val * 2 + root->val;
        if(root->left) dfs(store, root->left, val);
        if(root->right) dfs(store, root->right, val);

        if(root->left == nullptr && root->right == nullptr) store.push_back(val);
    }
};
