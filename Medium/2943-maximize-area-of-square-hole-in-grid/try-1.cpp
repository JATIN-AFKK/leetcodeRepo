/*
 * Problem #2943: Maximize Area of Square Hole in Grid
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/01/2026, 20:27:47
 * Link: https://leetcode.com/problems/maximize-area-of-square-hole-in-grid/
 */

class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin(), hBars.end());
        sort(vBars.begin(), vBars.end());
        int hcount = 1, vcount = 1, hmax = 1, vmax = 1;
        for(int i = 1;i < hBars.size();i++){
            if(hBars[i] - hBars[i-1] != 1) hcount = 1;
            else hcount++;
            hmax = max(hmax, hcount);
            cout << hcount;
        }
        for(int i = 1;i < vBars.size();i++){
            if(vBars[i] - vBars[i-1] != 1) vcount = 1;
            else vcount++;
            vmax = max(vmax, vcount);
        }
        
        return pow(min(hmax, vmax) + 1, 2);
    }
};
