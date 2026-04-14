/*
 * Problem #869: Reordered Power of 2
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 07/02/2026, 23:59:21
 * Link: https://leetcode.com/problems/reordered-power-of-2/
 */

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string target = to_string(n);
        sort(target.begin(), target.end());

        for(int i = 0;i < 31;i++){
            string possible = to_string(1 << i);
            sort(possible.begin(), possible.end());

            if(possible == target) return true;
        }
        return false;
    }
};
