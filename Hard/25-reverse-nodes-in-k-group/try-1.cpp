/*
 * Problem #25: Reverse Nodes in k-Group
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/03/2026, 02:20:15
 * Link: https://leetcode.com/problems/reverse-nodes-in-k-group/
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
    ListNode* solve(ListNode* head, int k, int len){
        if(len < k) return head;

        int count = 0;
        ListNode* pre = NULL;
        ListNode*  temp;
        ListNode* cur = head;
        while(count != k){
            temp = cur -> next;
            cur -> next = pre;

            count++;
            pre = cur;
            cur = temp;
        }
        head->next = solve(temp, k, len - count);

        return pre;


    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k == 1) return head;
        int len = 0;
        
        ListNode* crawl = head;
        while(crawl){
            len++;
            crawl = crawl -> next;
        }

        return solve(head, k, len);
    }
};
