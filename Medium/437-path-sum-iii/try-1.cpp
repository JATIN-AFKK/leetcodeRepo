/*
 * Problem #437: Path Sum III
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/11/2025, 13:02:30
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
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long,int> up;
        up[0] = 1;
        return dfs(root,up,0,targetSum);
    }

    int dfs(TreeNode* root,unordered_map<long long,int> sumCount,long long preSum,int targetSum){
        if(!root) return 0;
        int count = 0;

        //if endeds with current root node
        long long curSum = preSum + root->val;
        long long needed = curSum - targetSum;
        count += sumCount[needed];
        sumCount[curSum]++;

        //if ends with next root node
        count += dfs(root->left,sumCount,curSum,targetSum);
        count += dfs(root->right,sumCount,curSum,targetSum);
        return count;
    }

};
