/*
 * Problem #2856: Minimum Array Length After Pair Removals
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/02/2026, 22:31:53
 * Link: https://leetcode.com/problems/minimum-array-length-after-pair-removals/
 */

class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        unordered_map<int,int> up;
        for(int num : nums) up[num]++;

        priority_queue<int> pq;
        for(auto & [num, freq] : up) pq.push(freq);

        while(pq.size() >= 2){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            a--;
            b--;

            if(a) pq.push(a);
            if(b) pq.push(b);
        }

        if(pq.empty()) return 0;
        return pq.top();
    }
};
