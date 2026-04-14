/*
 * Problem #95: Unique Binary Search Trees II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/03/2026, 16:33:28
 * Link: https://leetcode.com/problems/unique-binary-search-trees-ii/
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
    vector<TreeNode*> solve(int l, int r){
        if(l > r) return {nullptr};
        vector<TreeNode*> ans;

        for(int i = l; i <= r; i++){
            vector<TreeNode*> leftarr = solve(l, i - 1);
            vector<TreeNode*> rightarr = solve(i + 1, r);

            for(auto l : leftarr){
                for(auto r : rightarr){
                    TreeNode* root = new TreeNode(i);
                    root -> left = l;
                    root -> right = r;
                    ans.push_back(root);
                }
            }
        }
        return ans;

    }
    vector<TreeNode*> generateTrees(int n) {
        return solve(1, n);
    
    }
};
