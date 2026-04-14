/*
 * Problem #501: Find Mode in Binary Search Tree
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/03/2026, 17:31:04
 * Link: https://leetcode.com/problems/find-mode-in-binary-search-tree/
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
    unordered_map<int, int> freq;
    void inorder(TreeNode* root){
        if(root){
            inorder(root->left);
            freq[root -> val]++;
            inorder(root -> right);
        }
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        int max_count = INT_MIN;
        inorder(root);

        for(auto [val, fr] : freq) max_count = max(max_count,fr );
        for(auto [val, fr] : freq) if(fr == max_count) ans.push_back(val);

        // cout << max_count << endl
        return ans;
    }
};
