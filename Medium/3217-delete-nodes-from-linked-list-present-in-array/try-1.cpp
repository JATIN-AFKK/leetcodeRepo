/*
 * Problem #3217: Delete Nodes From Linked List Present in Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/10/2025, 18:50:24
 * Link: https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st(nums.begin(),nums.end());
        ListNode* it = head;
        while(it){
            while(it->next && st.count(it->next->val)){
                ListNode* temp;
                temp = it->next;
                it->next = it->next->next;
                delete temp;
            }
            it = it->next;
        }
        if(st.count(head->val)) return head->next;
        return head;
    }
};
