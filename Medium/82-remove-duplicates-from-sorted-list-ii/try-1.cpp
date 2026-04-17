/*
 * Problem #82: Remove Duplicates from Sorted List II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/03/2025, 16:39:29
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
        map<int,int> omap;
        ListNode* result = new ListNode(0);
        ListNode* it2 = result;
        ListNode* it1 = head;
        while(it1 != nullptr){
            omap[it1->val]++;
            it1 = it1->next;
        }

        while(head != nullptr){
            if(omap[head->val] == 1){
                ListNode* Newnode = new ListNode(head->val);
                it2->next = Newnode;
                it2 = it2->next;
            }
            head = head->next;
        }

        return result->next;

        
    }
};
