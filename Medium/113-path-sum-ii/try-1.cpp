/*
 * Problem #113: Path Sum II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/11/2025, 11:45:17
 * Link: https://leetcode.com/problems/path-sum-ii/
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
    vector<vector<int>> res;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        dfs(root,temp,0,targetSum);
        return res;
    }
    void dfs(TreeNode* root,vector<int> path,int sum,int needSum){
        if(!root) return;
        path.push_back(root->val);
        sum += root->val;

        if(!root->left && !root->right && sum == needSum){
            res.push_back(path);
        }
        dfs(root->left,path,sum,needSum);
        dfs(root->right,path,sum,needSum);
    }
};
