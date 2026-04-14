/*
 * Problem #637: Average of Levels in Binary Tree
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/03/2026, 18:50:34
 * Link: https://leetcode.com/problems/average-of-levels-in-binary-tree/
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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode* > qu;
        int num_parent = 1;
        int cur_child = 0;
        int tillnow = 0;
        long long total = 0;
        vector<double> res;

        qu.push(root);
        while(!qu.empty()){
            TreeNode* curNode = qu.front();
            qu.pop();
            tillnow++;
            
            total += curNode -> val;
            if(curNode -> left) {
                qu.push(curNode -> left);
                cur_child++;
            }
            if(curNode -> right) {
                qu.push(curNode -> right);
                cur_child++;
            }
            if(tillnow == num_parent) {
                res.push_back((double)total / tillnow);
                tillnow = 0;
                num_parent = cur_child;
                cur_child = 0;
                total = 0;
            }
        }
        return res;
    }
};
