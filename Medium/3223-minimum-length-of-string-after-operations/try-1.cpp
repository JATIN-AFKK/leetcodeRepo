/*
 * Problem #3223: Minimum Length of String After Operations
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/02/2026, 16:08:57
 * Link: https://leetcode.com/problems/minimum-length-of-string-after-operations/
 */

class Solution {
public:
    int minimumLength(string s) {
        array<int, 26> arr = {};
        for(char ch : s) arr[ch - 'a']++;

        int total = 0;
        for(int freq : arr){
            if(freq == 0) continue;
            else if(freq % 2 == 1) total += 1;
            else total += 2;
        }
        return total;
    }
};
