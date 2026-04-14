/*
 * Problem #3153: Sum of Digit Differences of All Pairs
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 23/02/2026, 23:00:58
 * Link: https://leetcode.com/problems/sum-of-digit-differences-of-all-pairs/
 */

class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        long long ans = 0, n = nums.size();
        while(nums[0]){
            vector<long long> count(10, 0);
            for(int i = 0;i < n;i++){
                int mod = nums[i] % 10;
                nums[i] /= 10;
                count[mod]++;
            }
            long long total = 0, sq = 0;
            for(int freq : count){
                total += freq;
                sq += (long long)freq*freq;
            }

            ans += (total * total - sq)/2;
        }
        return ans;
    }
};
