/*
 * Problem #148: Sort List
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/04/2026, 12:50:42
 * Link: https://leetcode.com/problems/sort-list/
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
    ListNode* sortList(ListNode* head) {
        if(head == nullptr) return head;
        ListNode* ans = head;
        vector<int> res;
        for(ListNode* i = head; i != nullptr; i = i -> next) res.push_back(i -> val);

        sort(res.begin(), res.end());
        for(int val : res){
            head -> val = val;
            head = head -> next;
        }
        return ans;
    }
};
