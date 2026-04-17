/*
 * Problem #142: Linked List Cycle II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/03/2025, 12:25:04
 * Link: https://leetcode.com/problems/linked-list-cycle-ii/
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int> umap;
        while(head != nullptr){
            if(umap.find(head) != umap.end()){
                return head;
            }
            umap[head] = 1;
            head = head->next;
        }
        return nullptr;
    }
};
