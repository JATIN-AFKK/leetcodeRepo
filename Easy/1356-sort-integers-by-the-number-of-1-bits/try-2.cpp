/*
 * Problem #1356: Sort Integers by The Number of 1 Bits
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 30/01/2026, 14:07:22
 * Link: https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
 */

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n);
        for(int i = 0;i < n;i++){
            res[i] = __builtin_popcount(arr[i]) * 100001 + arr[i];
        }
        sort(res.begin(), res.end());
        for(int & ele : res) ele %= 100001;
        return res;
    }
};
