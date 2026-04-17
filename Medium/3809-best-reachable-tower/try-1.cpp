/*
 * Problem #3809: Best Reachable Tower
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/01/2026, 20:24:47
 * Link: https://leetcode.com/problems/best-reachable-tower/
 */

class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<int> ans = {INT_MAX, INT_MAX, 0};
        for(int i = 0;i < towers.size();i++){
            int dist = abs(towers[i][0] - center[0]) + abs(towers[i][1] - center[1]);
            if(dist > radius){
                continue;
            }
            if(ans[2] > towers[i][2]){
                continue;
            }
            else if(ans[2] < towers[i][2]){
                ans = towers[i];
                continue;
            }
            vector<vector<int>> sorter = {
                {ans[0], ans[1]},
                {towers[i][0], towers[i][1]}
            };

            sort(sorter.begin(), sorter.end());
            if(sorter[0] == vector<int> {towers[i][0], towers[i][1]}) ans = towers[i];
        }

        if(ans == vector<int> {INT_MAX, INT_MAX,0}) return {-1, -1};
        else return {ans[0], ans[1]};
    }
};
