/*
 * Problem #3694: Distinct Points Reachable After Substring Removal
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/03/2026, 00:09:20
 * Link: https://leetcode.com/problems/distinct-points-reachable-after-substring-removal/
 */

class Solution {
public:
    int distinctPoints(string s, int k) {
        set<pair<int,int>> pointSet;

        pair<int, int> start = {0, 0};
        int l = 0;
        for(int e = 0;e < s.size(); e++){
            if(s[e] == 'U') start.second++;
            else if(s[e] == 'D') start.second--;
            else if(s[e] == 'L') start.first--;
            else start.first++;

            if(e - l + 1 < k) continue;

            pointSet.insert(start);
            if(s[l] == 'U') start.second--;
            else if(s[l] == 'D') start.second++;
            else if(s[l] == 'L') start.first++;
            else start.first--;
            l++;
        }
        return pointSet.size();
    }
};
