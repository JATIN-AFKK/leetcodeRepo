/*
 * Problem #3898: Find the Degree of Each Vertex
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/04/2026, 08:03:42
 * Link: https://leetcode.com/problems/find-the-degree-of-each-vertex/
 */

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> count;
        for(auto &row : matrix){
            int total = accumulate(row.begin(), row.end(), 0);
            count.push_back(total);
        }
        return count;
    }
};
