/*
 * Problem #104: Maximum Depth of Binary Tree
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 11/03/2025, 16:48:13
 * Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
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
    int maxDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }

        deque<TreeNode*> dq;
        int i,currsize,c = 0;
        TreeNode* element;

        dq.push_back(root);
        while(dq.size()){
            currsize = dq.size();
            for(i = 0;i < currsize;i++){
                element = dq.front();
                dq.pop_front();
                if(element->right){
                    dq.push_back(element->right);
                }
                if(element->left){
                    dq.push_back(element->left);
                }
            }
            c++;
        }
        return c;
    }
};
