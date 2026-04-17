/*
 * Problem #2748: Number of Beautiful Pairs
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 19:03:34
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

            int x = nums[j];
            while(x >= 10) x /= 10;
            freq[x]++;
        }
        return count;
    }
};
