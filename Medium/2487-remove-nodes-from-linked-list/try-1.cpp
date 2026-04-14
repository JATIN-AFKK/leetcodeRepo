/*
 * Problem #2487: Remove Nodes From Linked List
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/03/2026, 12:28:54
 * Link: https://leetcode.com/problems/remove-nodes-from-linked-list/
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
    stack<ListNode*> st;
    void solve(ListNode* head){
        if(head == NULL) {
            return;
        }
        solve(head -> next);
        if(st.empty() || st.top() -> val <= head -> val) st.push(head); 
    }
    ListNode* removeNodes(ListNode* head) {
        solve(head);
        ListNode* header = new ListNode();
        ListNode* end = header;
        while(!st.empty()){
            end -> next = st.top();
            st.pop();
            end = end -> next;
        }
        end -> next = NULL;
        return header -> next;
    }
};
