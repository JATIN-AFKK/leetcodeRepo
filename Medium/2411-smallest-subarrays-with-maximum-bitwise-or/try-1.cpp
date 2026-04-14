/*
 * Problem #2411: Smallest Subarrays With Maximum Bitwise OR
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/03/2026, 23:14:16
 * Link: https://leetcode.com/problems/smallest-subarrays-with-maximum-bitwise-or/
 */

class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        vector<vector<int>> count(32);
        vector<int> ans(nums.size());
        for(int ind = 0;ind < nums.size();ind++){
            int num = nums[ind];
            for(int i = 0;i < 32;i++) if((num >> i) & 1) count[i].push_back(ind);
        }

        for(int i = 0;i < nums.size();i++){
            int possibleEnd = -1;
            for(int j = 0;j < 32;j++){
                auto it = lower_bound(count[j].begin(), count[j].end(), i);
                if(it != count[j].end()) {
                    possibleEnd = max(possibleEnd, *it);
                }
            }
            if(possibleEnd == -1) ans[i] = 1;
            else ans[i] = possibleEnd - i + 1;
        }
        return ans;
    }
};
