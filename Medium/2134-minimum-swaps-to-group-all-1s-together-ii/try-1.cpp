/*
 * Problem #2134: Minimum Swaps to Group All 1's Together II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2026, 21:03:32
 * Link: https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/
 */

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int totalOnes = count_if(nums.begin(), nums.end(), [](int x){ return x == 1; });
        if(totalOnes == 0) return 0;

        int l = 0, curZero = 0, ans = INT_MAX;
        for(int e = 0;e < 2*nums.size(); e++){
            int effInd = e % nums.size();
            if(nums[effInd] == 0) curZero++;

            if(e - l + 1 < totalOnes) continue;

            ans = min(ans, curZero);
            if(nums[l % nums.size()] == 0) curZero--;
            l++;
        }
        return ans;

    }
};
