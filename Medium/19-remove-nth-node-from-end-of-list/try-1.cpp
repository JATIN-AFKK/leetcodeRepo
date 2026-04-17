/*
 * Problem #19: Remove Nth Node From End of List
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/03/2025, 17:48:27
 * Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* it1 = dummy;
        ListNode* it2 = dummy;

        int i;
        for(i = 0;i < n+1;i++){
            it1 = it1->next;
        }
        while(it1 != nullptr){
            it2 = it2->next;
            it1 = it1->next;
        }
        it2->next = it2->next->next;
        return dummy->next;

    }
};
