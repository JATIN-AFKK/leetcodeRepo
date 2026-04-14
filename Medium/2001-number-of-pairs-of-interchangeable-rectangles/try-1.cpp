/*
 * Problem #2001: Number of Pairs of Interchangeable Rectangles
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/02/2026, 16:28:14
 * Link: https://leetcode.com/problems/number-of-pairs-of-interchangeable-rectangles/
 */

class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<string,long long> ump;
        long long ans = 0;
        for(vector<int> &p : rectangles){
            int height = p[1], width = p[0];
            int greatestDiv = gcd(height, width);
            
            string key = to_string(height/greatestDiv) + '#' + to_string(width / greatestDiv);

            ans += ump[key];
            ump[key]++;
        }
        return ans;
    }
};
