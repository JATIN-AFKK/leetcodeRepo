/*
 * Problem #3895: Count Digit Appearances
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/04/2026, 20:08:28
 * Link: https://leetcode.com/problems/count-digit-appearances/
 */

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans = 0;
        for(int num : nums){
            while(num){
                if(num % 10 == digit) ans++;
                num /= 10;
            }
        }
        return ans;
    }
};
