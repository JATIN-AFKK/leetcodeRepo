/*
 * Problem #3899: Angles of a Triangle
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/04/2026, 08:14:06
 * Link: https://leetcode.com/problems/angles-of-a-triangle/
 */

class Solution {
public:
    double angle(int a, int b, int c){
        int temp = a*a + b*b - c*c;
        double s = (temp*1.0)/(2*a*b);
        return acos(s);
    }
    vector<double> internalAngles(vector<int>& sides) {
        sort(sides.begin(), sides.end());
        if(sides[0] + sides[1] <= sides[2]) return {};
        vector<double> ans;
        ans.push_back(angle(sides[2], sides[1], sides[0]));
        ans.push_back(angle(sides[0], sides[2], sides[1]));
        ans.push_back(angle(sides[0], sides[1], sides[2]));
        sort(ans.begin(), ans.end());

        for(double &val : ans){
            val *= 180;
            val /= acos(-1);
        }
        return ans;

        
    }
};
