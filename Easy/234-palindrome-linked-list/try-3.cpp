/*
 * Problem #234: Palindrome Linked List
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 11/03/2026, 23:53:35
 * Link: https://leetcode.com/problems/palindrome-linked-list/
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
        if(right == NULL) return true;

        bool ans= solve(right -> next);

        if(ans == false) return false;

        if(left -> val != right -> val) return false;
        left = left -> next;

        return true;

    }
    bool isPalindrome(ListNode* head) {
        left = head;
        return solve(head);
    }
};
