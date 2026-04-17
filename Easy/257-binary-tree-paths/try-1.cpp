/*
 * Problem #257: Binary Tree Paths
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/11/2025, 11:36:30
 * Link: https://leetcode.com/problems/binary-tree-paths/
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
    vector<string> res;
    vector<string> binaryTreePaths(TreeNode* root) {
        pathFinder(root,"");
        return res;
    }

    void pathFinder(TreeNode* root,string path){
        if(!root) return;
        if(!path.empty()){
            path += "->";
        }
        path += to_string(root-> val);
        if(!root->left && !root->right){
            res.push_back(path);
        }

        pathFinder(root->left,path);
        pathFinder(root->right,path);
    }
    
};
