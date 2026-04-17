/*
 * Problem #3319: K-th Largest Perfect Subtree Size in Binary Tree
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/11/2025, 12:11:00
 * Link: https://leetcode.com/problems/k-th-largest-perfect-subtree-size-in-binary-tree/
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
    priority_queue<int> pq;
    int kthLargestPerfectSubtree(TreeNode* root, int k) {
        healper(root);
        if(pq.size() < k) return -1;
        for(int i = 1;i < k;i++) pq.pop();
        return pow(2,pq.top())-1;
    }
    pair<bool,int> healper(TreeNode* root){
        if(!root) return {true,0};
        pair<bool,int> left = healper(root->left);
        pair<bool,int> right = healper(root->right);

        bool state =  left.first & right.first & (left.second == right.second);
        if(state) pq.push(left.second + 1);
        return {state , left.second + 1};
    }

};
