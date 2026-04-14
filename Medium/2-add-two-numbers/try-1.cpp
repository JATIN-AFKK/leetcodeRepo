/*
 * Problem #2: Add Two Numbers
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/03/2026, 11:21:24
 * Link: https://leetcode.com/problems/add-two-numbers/
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
    int cur;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL){
            if(cur == 0) return NULL;
            else{
                ListNode* endNode = new ListNode(cur);
                return endNode;
            }
        }
        else if(l1 == NULL){
            int added = l2 -> val + cur;
            cur = added/10;

            l2 -> val = added % 10;
            l2 -> next = addTwoNumbers(l1, l2 -> next);
            return l2;
        }
        else if(l2 == NULL){
            int added = l1 -> val + cur;
            cur = added/10;

            l1 -> val = added % 10;
            l1 -> next = addTwoNumbers(l1 -> next, l2);
            return l1;
        }

        else{
            int added = l1 -> val + cur + l2 -> val;
            cur = added/10;

            l1 -> val = added % 10;
            l1 -> next = addTwoNumbers(l1 -> next, l2 -> next);
            return l1;
        }

    }
};
