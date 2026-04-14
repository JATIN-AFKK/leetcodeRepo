/*
 * Problem #203: Remove Linked List Elements
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 11/03/2026, 20:01:58
 * Link: https://leetcode.com/problems/remove-linked-list-elements/
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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return NULL;

        if(head -> val == val){
            head = head -> next;
            return removeElements(head, val);
        }
        else if(head -> next == NULL) return head;
        else if(head -> next -> val == val){
            head -> next = head -> next -> next;
            removeElements(head, val);
        }
        else{
            removeElements(head -> next, val);
        }
        return head;
    }
};
