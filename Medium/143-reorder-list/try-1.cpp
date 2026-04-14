/*
 * Problem #143: Reorder List
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/03/2026, 14:52:32
 * Link: https://leetcode.com/problems/reorder-list/
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
class Solution {
public:
    ListNode* left;
    bool solve(ListNode* right){
        if(right == NULL) return false;
        bool done = solve(right -> next);
        if(done == true) return true;

        if(left -> next == right){
            right -> next = NULL;
            return true;
        }
        else if(left == right){
            right -> next = NULL;
            return true;
        }

        right -> next = left -> next;
        left -> next = right;
        left = left -> next -> next;
        return false;
    }
    void reorderList(ListNode* head) {
        left = head;
        solve(head);
    }
};
