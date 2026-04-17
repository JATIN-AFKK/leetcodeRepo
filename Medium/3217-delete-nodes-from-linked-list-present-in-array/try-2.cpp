/*
 * Problem #3217: Delete Nodes From Linked List Present in Array
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 01/11/2025, 22:28:56
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
        while(it && it ->next){
            if(st.count(it->next->val)){
                ListNode* temp = it->next;
                it->next = it->next->next;
            }
            else{
                it = it->next;
            }
        }
        while(head){
            if(st.count(head->val)){
                ListNode* temp = head;
                head = head->next;
            }
            else{
                break;
            }
        }
        return head;
    }
};
