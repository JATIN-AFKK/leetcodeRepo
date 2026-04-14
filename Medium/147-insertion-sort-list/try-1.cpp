/*
 * Problem #147: Insertion Sort List
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/04/2026, 12:43:20
 * Link: https://leetcode.com/problems/insertion-sort-list/
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
    ListNode* insertionSortList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) return head;
        ListNode* header = new ListNode(0, head);

        for(ListNode* i = header; i -> next != nullptr; i = i -> next){
            int val = i -> next -> val;
            ListNode* j;
            for(j = header; j != i; j = j -> next){
                if(j -> next -> val  >= val) break;
            }
            int temp = j -> next ->val;
            for(ListNode* k = j -> next; k != i -> next; k = k -> next){
                int x = k -> next -> val;
                k -> next -> val = temp;
                temp = x;
            }
            j -> next -> val = val;

        }
        return header -> next;
    }
};
