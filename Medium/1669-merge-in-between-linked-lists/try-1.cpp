/*
 * Problem #1669: Merge In Between Linked Lists
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 23/01/2026, 00:05:04
 * Link: https://leetcode.com/problems/merge-in-between-linked-lists/
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* pcrawl = list1;
        ListNode* bcrawl = nullptr;

        int count = 0;
        while(count != a){
            bcrawl = pcrawl;
            pcrawl = pcrawl->next;
            count++;
        }
        while(count != b){
            pcrawl = pcrawl->next;
            count++;
        }
        bcrawl->next = list2;
        ListNode* l2h = list2;
        while(l2h->next) l2h = l2h->next;

        l2h->next = pcrawl->next;

        return list1;
    }
};
