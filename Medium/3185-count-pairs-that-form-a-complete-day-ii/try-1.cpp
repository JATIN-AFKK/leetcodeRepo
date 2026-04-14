/*
 * Problem #3185: Count Pairs That Form a Complete Day II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 23/02/2026, 23:19:00
 * Link: https://leetcode.com/problems/count-pairs-that-form-a-complete-day-ii/
 */

class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        array<int, 24> arr1 = {};
        for(int h : hours) arr1[h % 24]++;
        long long ans = 0;
        ans += 1ll*arr1[0]*(arr1[0] - 1)/2;
        ans += 1ll*arr1[12]*(arr1[12] - 1)/2;
        for(int i = 1;i < 12;i++) ans += (arr1[i]*arr1[24 - i]);

        return ans;
    }
};
