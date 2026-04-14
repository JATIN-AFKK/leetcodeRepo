/*
 * Problem #2870: Minimum Number of Operations to Make Array Empty
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/02/2026, 23:52:24
 * Link: https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty/
 */

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> count;
        int ans = 0;

        for(int num : nums) count[num]++;

        for(auto & [num , freq] : count){
            if(freq % 3 == 0) ans += freq/3;
            else if(freq % 3 == 2) ans += freq/3 + 1;
            else if(freq == 1) return -1;
            else ans += (freq - 4)/3 + 2;
        }
        return ans;
    }
};
