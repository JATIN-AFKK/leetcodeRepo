/*
 * Problem #107: Binary Tree Level Order Traversal II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/03/2026, 23:41:47
 * Link: https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root == nullptr) return {};
        vector<vector<int>> ans;

        queue<TreeNode*> qu;
        qu.push(root);

        int num_Parent = 1, num_child = 0, traversed_parent = 0;

        vector<int> row;
        while(!qu.empty()){
            TreeNode* parent = qu.front();
            qu.pop();
            row.push_back(parent -> val);
            traversed_parent++;

            if(parent -> left){
                qu.push(parent -> left);
                num_child++;
            }

            if(parent -> right){
                qu.push(parent -> right);
                num_child++;
            }

            if(traversed_parent == num_Parent){
                ans.push_back(row);
                traversed_parent = 0;
                num_Parent = num_child;
                num_child = 0;

                row = {};
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
