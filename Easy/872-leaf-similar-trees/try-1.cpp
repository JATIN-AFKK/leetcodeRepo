/*
 * Problem #872: Leaf-Similar Trees
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/03/2026, 21:42:33
 * Link: https://leetcode.com/problems/leaf-similar-trees/
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
    void dfs(TreeNode* root, vector<int> & vec){
        if(root == nullptr) return;
        dfs(root -> left, vec);
        if(root -> left == nullptr && root -> right == nullptr) vec.push_back(root -> val);
        dfs(root -> right, vec);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vec1, vec2;
        dfs(root1, vec1);
        dfs(root2, vec2);

        if(vec1.size() != vec2.size()) return false;
        return vec1 == vec2;
    }
};
