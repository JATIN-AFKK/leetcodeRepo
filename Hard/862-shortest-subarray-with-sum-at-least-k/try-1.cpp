/*
 * Problem #862: Shortest Subarray with Sum at Least K
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/12/2025, 23:15:45
 * Link: https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/
 */

class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        vector<long long> prefix(nums.size() + 1, 0);
        for(int i = 0;i < nums.size(); i++){
            prefix[i + 1] += prefix[i] + nums[i];
        }
        int ans = INT_MAX;
        deque<int> dqMin;
        for(int i = 0;i < prefix.size(); i++){
            while(!dqMin.empty() && prefix[i] - prefix[dqMin.front()] >= k){
                ans = min(ans, i - dqMin.front());
                dqMin.pop_front();
            }
            
            while(!dqMin.empty() && prefix[dqMin.back()] > prefix[i]){
                dqMin.pop_back();
            }
            dqMin.push_back(i);
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};
