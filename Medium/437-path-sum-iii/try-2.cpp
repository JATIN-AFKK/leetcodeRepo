/*
 * Problem #437: Path Sum III
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 20/11/2025, 13:05:33
 * Link: https://leetcode.com/problems/path-sum-iii/
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
    unordered_map<long long,int> sumCount;
    int pathSum(TreeNode* root, int targetSum) {
        sumCount[0] = 1;
        return dfs(root,0,targetSum);
    }

    int dfs(TreeNode* root,long long preSum,int targetSum){
        if(!root) return 0;
        int count = 0;

        //if endeds with current root node
        long long curSum = preSum + root->val;
        long long needed = curSum - targetSum;
        count += sumCount[needed];
        sumCount[curSum]++;

        //if ends with next root node
        count += dfs(root->left,curSum,targetSum);
        count += dfs(root->right,curSum,targetSum);

        sumCount[curSum]--;
        return count;
    }

};
