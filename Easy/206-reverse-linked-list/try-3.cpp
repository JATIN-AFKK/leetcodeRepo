/*
 * Problem #206: Reverse Linked List
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 02/04/2025, 10:23:41
 * Link: https://leetcode.com/problems/reverse-linked-list/
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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* pre = nullptr;
        ListNode* dummy;
        while(temp){
            dummy = temp ->next;
            temp->next = pre;
            pre = temp;
            temp = dummy;
        }
        return pre;
    }
};
