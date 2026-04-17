/*
 * Problem #234: Palindrome Linked List
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 08/03/2025, 18:42:02
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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* pre = nullptr;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* curr = slow;
        while(curr){
            ListNode* temp = curr->next;
            curr->next = pre;
            pre = curr;
            curr = temp;
        }

        while(pre){
            if(pre->val != head->val){
                return false;
            }
            pre = pre->next;
            head = head->next;
        }
        return true;
    }
};
