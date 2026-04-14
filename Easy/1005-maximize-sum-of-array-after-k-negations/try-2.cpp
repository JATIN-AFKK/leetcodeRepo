/*
 * Problem #1005: Maximize Sum Of Array After K Negations
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 28/03/2026, 12:16:32
 * Link: https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/
 */

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0;
        while(k){
            if(i == nums.size() || nums[i] >= 0) break;
            nums[i] *= -1;
            k--;
            i++;
        }
        int low = *min_element(nums.begin(), nums.end());
        int total = accumulate(nums.begin(), nums.end(), 0);
        total -= low;

        if(k % 2 == 1) return total - low;
        return total + low;
    }
};
