/*
 * Problem #988: Smallest String Starting From Leaf
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 24/11/2025, 17:37:35
 * Link: https://leetcode.com/problems/smallest-string-starting-from-leaf/
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
    string smallestFromLeaf(TreeNode* root) {
        return dfs(root,"");
    }

    string dfs(TreeNode* root,string state){
        if(!root) return "";
        string nextState = (char)('a' + root->val) +  state;

        if(!root->left && !root->right) return nextState;

        string left = dfs(root -> left,nextState);
        string right = dfs(root -> right,nextState);

        if(left.empty()) return right;
        if(right.empty()) return left;

        if(left > right) return right;
        else return left;
    }
};
