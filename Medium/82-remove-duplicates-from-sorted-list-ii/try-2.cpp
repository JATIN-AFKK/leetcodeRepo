/*
 * Problem #82: Remove Duplicates from Sorted List II
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 08/03/2025, 17:16:38
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* result = new ListNode(0);
        ListNode* dummy = result;
        while(head != nullptr){
            if(head->next == nullptr || head->val != head->next->val){
                dummy->next = head;
                dummy = dummy->next;
            }

            while(head->next != nullptr && head->val == head->next->val){
                head = head->next;
            }

            head = head->next;

        }
        dummy->next = nullptr;
        return result->next;
    }
};
