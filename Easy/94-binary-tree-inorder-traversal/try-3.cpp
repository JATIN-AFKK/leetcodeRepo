/*
 * Problem #94: Binary Tree Inorder Traversal
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 11/03/2025, 17:10:45
 * Link: https://leetcode.com/problems/binary-tree-inorder-traversal/
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
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == nullptr){
            return {};
        }

        vector<int> result;
        vector<TreeNode*> vec;

        TreeNode* current = root,*last;

        while(current != nullptr || vec.size()){
            while(current != nullptr){
                vec.push_back(current);
                current = current->left;
            }
            last = vec.back();
            vec.pop_back();
            result.push_back(last->val);
            current = last->right;
        }
        return result;
    }
};
