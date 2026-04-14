/*
 * Problem #2001: Number of Pairs of Interchangeable Rectangles
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 11/02/2026, 16:36:02
 * Link: https://leetcode.com/problems/number-of-pairs-of-interchangeable-rectangles/
 */

class Solution {
    public:
    struct pair_hash {
        size_t operator()(const pair<int,int>& p) const {
            return hash<long long>()(
                (1LL * p.first << 32) ^ p.second
            );
        }
    };
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<pair<int,int>,long long, pair_hash> ump;
        long long ans = 0;
        for(vector<int> &p : rectangles){
            int height = p[1], width = p[0];
            int greatestDiv = gcd(height, width);

            pair<int,int> key = {height/greatestDiv,width/greatestDiv };

            ans += ump[key];
            ump[key]++;
        }
        return ans;
    }
};
