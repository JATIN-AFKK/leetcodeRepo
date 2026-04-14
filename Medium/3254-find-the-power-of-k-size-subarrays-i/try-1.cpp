/*
 * Problem #3254: Find the Power of K-Size Subarrays I
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/03/2026, 00:34:23
 * Link: https://leetcode.com/problems/find-the-power-of-k-size-subarrays-i/
 */

class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        if(k == 1) return nums;
        vector<int> ans, misMatches;

        int l = 0, good = 0;
        for(int e = 1;e < nums.size();e++){
            if(nums[e] - nums[e - 1] == 1) good++;

            if(e - l + 1 < k) continue;

            if(e - l == good) ans.push_back(nums[e]);
            else ans.push_back(-1);

            if(nums[l + 1] - nums[l] == 1) good--;
            l++;
        }
        return ans;
    }
};
