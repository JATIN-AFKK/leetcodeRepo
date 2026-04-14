/*
 * Problem #515: Find Largest Value in Each Tree Row
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/03/2026, 12:37:34
 * Link: https://leetcode.com/problems/find-largest-value-in-each-tree-row/
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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(root == nullptr) return {};
        queue<TreeNode* > qu;
        qu.push(root);

        int currentParent = 1, child = 0, traversed = 0, rowMax = INT_MIN;
        while(!qu.empty()){
            TreeNode* parent = qu.front();
            qu.pop();
            traversed++;
        
            rowMax = max(rowMax, parent -> val);

            if(parent -> left){
                qu.push(parent -> left);
                child++;
            }
            if(parent -> right){
                qu.push(parent -> right);
                child++;
            }

            if(traversed == currentParent){
                ans.push_back(rowMax);

                traversed = 0;
                currentParent = child;
                child = 0;
                rowMax = INT_MIN;
            }

        }
        return ans;
    }
};
