/*
 * Problem #653: Two Sum IV - Input is a BST
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/03/2026, 19:02:57
 * Link: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
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
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> up;
        queue<TreeNode* > qu;
        qu.push(root);
        while(!qu.empty()){
            TreeNode* top = qu.front();
            qu.pop();

            if(top -> left) qu.push(top -> left);
            if(top -> right) qu.push(top -> right);

            int need = k - top -> val;
            if(up.find(need) != up.end()) return true;
            up.insert(top -> val);
        }
        return false;

    }
};
