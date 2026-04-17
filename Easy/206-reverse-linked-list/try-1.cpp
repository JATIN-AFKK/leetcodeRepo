/*
 * Problem #206: Reverse Linked List
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/03/2025, 11:12:16
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
        if(head == nullptr){
            return head;
        }
        vector< ListNode* > lstack;
        int size = 0,i;
        ListNode* temp = head,*result,*curr;
        while(temp != nullptr){
            lstack.push_back(temp);
            temp = temp->next;
            size++;
        }
        result = lstack.back();
        for(i = 0;i < size - 1;i++){
            curr = lstack.back();
            lstack.pop_back();
            curr->next = lstack.back();
        }
        curr = lstack.back();
        lstack.pop_back();
        curr->next = nullptr;
        return result;
    }
};
