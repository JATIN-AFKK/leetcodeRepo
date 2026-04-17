/*
 * Problem #24: Swap Nodes in Pairs
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 21/01/2026, 21:59:49
 * Link: https://leetcode.com/problems/swap-nodes-in-pairs/
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* ans = head;
        if(head && head->next) ans = head->next;

        ListNode* pcrawl = head;
        ListNode* bpcrawl = nullptr;
        while(pcrawl && pcrawl->next){
            ListNode* npcrawl = pcrawl -> next;

            pcrawl -> next = npcrawl->next;
            npcrawl -> next = pcrawl;
            if(bpcrawl) bpcrawl -> next = npcrawl;
            
            bpcrawl = pcrawl;
            pcrawl = pcrawl->next;
        }
        return ans;
    }
};
