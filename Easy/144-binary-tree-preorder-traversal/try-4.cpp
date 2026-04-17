/*
 * Problem #144: Binary Tree Preorder Traversal
 * Difficulty: Easy
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 11/03/2025, 17:30:38
 * Link: https://leetcode.com/problems/binary-tree-preorder-traversal/
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
    vector<int> preorderTraversal(TreeNode* root) {
    //     vector<int> result;
    //     preorder(root,result);
    //     return result;
    // }
    // void preorder(TreeNode* node, vector<int> & vec){
    //     if(node != nullptr){
    //         vec.push_back(node->val);
    //         preorder(node->left,vec);
    //         preorder(node->right,vec);
    //     }

        vector<int> result;
        if(root == nullptr){
            return {};
        }

        vector<TreeNode*> traversal;
        TreeNode* element;

        traversal.push_back(root);
        while(traversal.size()){
            element = traversal.back();
            traversal.pop_back();

            result.push_back(element->val);

            if(element->right != nullptr){
                traversal.push_back(element->right);
            }

            if(element->left != nullptr){
                traversal.push_back(element->left);
            }
        }
        return result;

    }
};
