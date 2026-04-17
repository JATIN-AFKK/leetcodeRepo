/*
 * Problem #21: Merge Two Sorted Lists
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/03/2025, 11:59:01
 * Link: https://leetcode.com/problems/merge-two-sorted-lists/
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode(0);
        ListNode* nextptr = head;

        while(list1 != nullptr && list2 != nullptr){
            if(list1->val >= list2->val){
                nextptr->next = list2;
                list2 = list2->next;
            }
            else{
                nextptr->next = list1;
                list1 = list1->next;
            } 
            nextptr = nextptr->next;
        }
        if(list1 == nullptr && list2 == nullptr){
            return nullptr;
        }
        else if(list1 == nullptr){
            nextptr->next = list2;
            return head->next;

        }
        else{
            nextptr->next = list1;
            return head->next;
        }
    }
};
