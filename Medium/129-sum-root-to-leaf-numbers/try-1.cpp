/*
 * Problem #129: Sum Root to Leaf Numbers
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/11/2025, 11:57:11
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
    vector<string> pathNum;
    int sumNumbers(TreeNode* root) {
        dfs(root,"");
        int sum = 0;
        for(int i = 0;i < pathNum.size();i++) sum += stoi(pathNum[i]);
        return sum;
    }
    void dfs(TreeNode* root,string str){
        if(!root) return;
        str += to_string(root->val);
        if(!root->left && !root->right) pathNum.push_back(str);
        dfs(root->left,str);
        dfs(root->right,str);
    }
};
