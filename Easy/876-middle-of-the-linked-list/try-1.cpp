/*
 * Problem #876: Middle of the Linked List
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/03/2025, 17:53:41
 * Link: https://leetcode.com/problems/middle-of-the-linked-list/
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
    ListNode* middleNode(ListNode* head) {
        ListNode* it1 = head;
        ListNode* it2 = head;
        while(it2 && it2->next){
            it1 = it1->next;
            it2 = it2->next->next;
        }
        return it1;
    }
};
