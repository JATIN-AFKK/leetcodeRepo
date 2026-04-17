/*
 * Problem #234: Palindrome Linked List
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/03/2025, 18:08:42
 * Link: https://leetcode.com/problems/palindrome-linked-list/
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
    bool isPalindrome(ListNode* head) {
        vector<ListNode*> vec;
        int i,size;
        while(head != nullptr){
            vec.push_back(head);
            head = head->next;
        }
        size = vec.size()/2;
        for(i = 0;i < size;i++){
            if(vec[i]->val != vec[vec.size() - 1 - i]->val){
                return false;
            }
        }
        return true;
    }
};
