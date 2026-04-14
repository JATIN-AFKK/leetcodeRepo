/*
 * Problem #501: Find Mode in Binary Search Tree
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 15/03/2026, 17:51:02
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
    vector<int> ans;
    TreeNode* pre = nullptr;
    int count = 1, max_count = 0;
    void inorder(TreeNode* root){
        if(root == nullptr) return;
        inorder(root -> left);

        if(pre && pre -> val == root -> val) count++;
        else count = 1;

        if(count == max_count) ans.push_back(root -> val);
        else if(count > max_count){
            ans = {root -> val};
            max_count = count;
        }

        pre = root;
        inorder(root -> right);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return ans;
    }
};
