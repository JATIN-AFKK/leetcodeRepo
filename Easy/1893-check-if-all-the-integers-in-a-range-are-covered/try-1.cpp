/*
 * Problem #1893: Check if All the Integers in a Range Are Covered
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/08/2025, 11:53:18
 * Link: https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/
 */

class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> count(51,0);
        for(int i = 0;i < ranges.size();i++){
            for(int j = ranges[i][0];j <= ranges[i][1];j++){
                count[j]++;
            }
        }
        for(int i = left;i <= right;i++){
            if(count[i] == 0){
                return false;
            }
        }
        return true;
    }
};
