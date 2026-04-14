/*
 * Problem #894: All Possible Full Binary Trees
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/03/2026, 00:18:19
 * Link: https://leetcode.com/problems/all-possible-full-binary-trees/
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
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n % 2 == 0) return {};
        else if(n == 1) return {new TreeNode(0)};
        vector<TreeNode*> ans;
        for(int i = 1;i <= n - 2; i++){
            vector<TreeNode*> left = allPossibleFBT(n - 1 - i);
            vector<TreeNode*> right = allPossibleFBT(i);

            for(int i = 0;i < left.size(); i++){
                for(int j = 0;j < right.size(); j++){
                    TreeNode* node = new TreeNode(0);
                    node -> left = left[i];
                    node -> right = right[j];
                    ans.push_back(node);
                }
            }
        }
        return ans;
    }
};
