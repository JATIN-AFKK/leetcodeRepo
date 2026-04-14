/*
 * Problem #3016: Minimum Number of Pushes to Type Word II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/02/2026, 18:50:40
 * Link: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/
 */

class Solution {
public:
    int minimumPushes(string word) {
        vector<int> count(26, 0);
        for(char ch : word) count[ch - 'a']++;

        priority_queue<int> pq;
        for(int f : count) if(f) pq.push(f);

        vector<int> key(8, 0);
        int i = 0, ops = 0;
        while(!pq.empty()){
            int freq = pq.top();
            pq.pop();
            key[i]++;
            
            ops += key[i]*freq;
            i = (i + 1)%8;
        }
        return ops;
    }
};
