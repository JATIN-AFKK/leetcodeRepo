/*
 * Problem #3442: Maximum Difference Between Even and Odd Frequency I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/02/2026, 11:37:33
 * Link: https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/
 */

class Solution {
public:
    int maxDifference(string s) {
        int min_even = INT_MAX;
        int max_odd = INT_MIN;

        vector<int> count(26, 0);
        for(char ch : s ) count[ch - 'a']++;

        for(int freq : count){
            if(freq > 0 && freq%2 == 1) max_odd = max(max_odd, freq);
            if(freq > 0 && freq%2 == 0) min_even = min(min_even, freq);
        }
        return max_odd - min_even;
    }
};
