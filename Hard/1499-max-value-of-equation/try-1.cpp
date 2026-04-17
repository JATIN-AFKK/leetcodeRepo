/*
 * Problem #1499: Max Value of Equation
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/12/2025, 13:16:23
 * Link: https://leetcode.com/problems/max-value-of-equation/
 */

class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        int ans = INT_MIN;
        deque<int> dq;
        for(int r = 0;r < points.size(); r++){
            while(!dq.empty() && points[dq.front()][0] + k < points[r][0]){
                dq.pop_front();
            }
            if(!dq.empty()) ans = max(ans, points[r][0] + points[r][1] + points[dq.front()][1] - points[dq.front()][0]);

            while(!dq.empty() && points[dq.back()][1] - points[dq.back()][0] < points[r][1] - points[r][0]){
                dq.pop_back();
            }
            dq.push_back(r);
        }
        return ans;
    }
};
