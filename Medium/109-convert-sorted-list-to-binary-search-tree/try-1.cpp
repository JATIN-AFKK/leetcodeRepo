/*
 * Problem #109: Convert Sorted List to Binary Search Tree
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/03/2026, 00:23:49
 * Link: https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
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
    TreeNode* solve(vector<int>& arr, int l, int r){
        if(l > r) return nullptr;
        int mid = (l + r)/2;

        TreeNode* root = new TreeNode(arr[mid]);
        root -> left = solve(arr, l, mid - 1);
        root -> right = solve(arr, mid + 1, r);

        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> arr;
        while(head != nullptr) {
            arr.push_back(head -> val);
            head = head -> next;
        }

        return solve(arr, 0, arr.size() - 1);
    }
};
