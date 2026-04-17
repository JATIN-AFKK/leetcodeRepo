/*
 * Problem #789: Escape The Ghosts
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 19/11/2025, 16:47:24
 * Link: https://leetcode.com/problems/escape-the-ghosts/
 */

class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int targetDistance = abs(target[0]) + abs(target[1]);
        for(int i = 0;i < ghosts.size();i++){
            int ghostDistance = abs(ghosts[i][0] - target[0]) + abs(ghosts[i][1] - target[1]);
            if(ghostDistance <= targetDistance) return false;
        }
        return true;
    }
};
