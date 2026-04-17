/*
 * Problem #203: Remove Linked List Elements
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 02/04/2025, 10:16:50
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
        ListNode* temp = new ListNode(0,nullptr);
        ListNode* result = temp;
        temp->next = head;
        while(temp->next != nullptr){
            if(temp->next->val == val){
                ListNode* del = temp->next;
                temp->next = temp->next->next;
                delete del;
            }
            else{
                temp = temp->next;
            }
        }
        return result->next;
    }
};
