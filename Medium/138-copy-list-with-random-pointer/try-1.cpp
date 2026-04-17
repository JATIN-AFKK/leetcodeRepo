/*
 * Problem #138: Copy List with Random Pointer
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/03/2025, 19:05:51
 * Link: https://leetcode.com/problems/copy-list-with-random-pointer/
 */

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* li1 = head;
        Node* dummy = head;
        unordered_map<Node*,Node*> umap;
        while(li1){
            umap[li1] = new Node(li1->val);
            li1 = li1->next;
        }
        while(dummy){
            umap[dummy]->next = umap[dummy->next];
            umap[dummy]->random = umap[dummy->random];
            dummy = dummy->next;
        }
        return umap[head];

    }
};
