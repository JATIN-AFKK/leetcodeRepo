/*
 * Problem #129: Sum Root to Leaf Numbers
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 20/11/2025, 11:59:31
 * Link: https://leetcode.com/problems/sum-root-to-leaf-numbers/
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
    vector<int> pathNum;
    int sumNumbers(TreeNode* root) {
        dfs(root,0);
        int sum = 0;
        for(int i = 0;i < pathNum.size();i++) sum += pathNum[i];
        return sum;
    }
    void dfs(TreeNode* root,int str){
        if(!root) return;
        str = str*10 + root->val;
        if(!root->left && !root->right) pathNum.push_back(str);
        dfs(root->left,str);
        dfs(root->right,str);
    }
};
