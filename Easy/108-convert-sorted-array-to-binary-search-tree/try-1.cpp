/*
 * Problem #108: Convert Sorted Array to Binary Search Tree
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/09/2025, 10:34:17
 * Link: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* node = bst(nums,0,nums.size()-1);
        return node;
    }
    TreeNode* bst(vector<int> nums,int l,int h){
        if(l > h){
            return nullptr;
        }
        int mid = (l+h)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = bst(nums,l,mid - 1);
        node->right = bst(nums,mid+1,h);
        return node;
    }

};
