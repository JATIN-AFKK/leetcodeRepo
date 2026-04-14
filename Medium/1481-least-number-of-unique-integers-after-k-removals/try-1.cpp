/*
 * Problem #1481: Least Number of Unique Integers after K Removals
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/02/2026, 18:32:44
 * Link: https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/
 */

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> count;
        for(int num : arr) count[num]++;

        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        for(auto [val, freq] : count) pq.push({freq, val});

        while(!pq.empty()){
            auto [freq, num] = pq.top();
            pq.pop();

            k -= freq;

            if(k == 0) return pq.size();
            else if(k < 0) return pq.size() + 1;
        }
        return 0;
    }
};
