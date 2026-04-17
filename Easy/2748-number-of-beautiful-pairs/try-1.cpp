/*
 * Problem #2748: Number of Beautiful Pairs
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 18:58:43
 * Link: https://leetcode.com/problems/number-of-beautiful-pairs/
 */

class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        vector<int> freq(10, 0);
        int count = 0;
        for(int j = 0;j < nums.size();j++){
            int lastDigit = nums[j]%10;
            for(int k = 0;k < 10;k++) if(gcd(k, lastDigit) == 1) count += freq[k];

            freq[to_string(nums[j])[0] - '0']++;
        }
        return count;
    }
};
