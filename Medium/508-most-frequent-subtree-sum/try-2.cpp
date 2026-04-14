/*
 * Problem #508: Most Frequent Subtree Sum
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 18/03/2026, 11:16:38
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
    int max_freq = INT_MIN;
    vector<int> ans;
    int dfs(TreeNode* root){
        if(root -> left == nullptr && root -> right == nullptr){
            freq[root -> val]++;
            if(freq[root -> val] == max_freq) ans.push_back(root -> val);
            else if(freq[root -> val] > max_freq){
                ans = {root -> val};
                max_freq = freq[root -> val];
            }
            return root -> val;
        }
        int left = 0, right = 0;

        if(root -> left) left = dfs(root -> left);
        if(root -> right) right = dfs(root -> right);

        int sum = left + right + root -> val;
        freq[sum]++;

        if(freq[sum] == max_freq) ans.push_back(sum);
        else if(freq[sum] > max_freq){
            ans = {sum};
            max_freq = freq[sum];
        }
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
