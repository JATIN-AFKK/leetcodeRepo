/*
 * Problem #508: Most Frequent Subtree Sum
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/03/2026, 11:05:35
 * Link: https://leetcode.com/problems/most-frequent-subtree-sum/
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
    int dfs(TreeNode* root){
        if(root -> left == nullptr && root -> right == nullptr){
            freq[root -> val]++;
            return root -> val;
        }
        int left = 0, right = 0;

        if(root -> left) left = dfs(root -> left);
        if(root -> right) right = dfs(root -> right);

        freq[left + right + root -> val]++;
        return left + right + root -> val;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        vector<int> ans;

        int max_freq = INT_MIN;
        for(auto [val, fr] : freq){
            max_freq = max(max_freq, fr);
        }

        for(auto [val, fr] : freq) if(fr == max_freq) ans.push_back(val);
        return ans;
    }
};
