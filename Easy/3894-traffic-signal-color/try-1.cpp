/*
 * Problem #3894: Traffic Signal Color
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/04/2026, 20:04:38
 * Link: https://leetcode.com/problems/traffic-signal-color/
 */

class Solution {
public:
    string trafficSignal(int timer) {
        if(timer == 0) return "Green";
        else if(timer == 30) return "Orange";
        else if(timer > 30 && timer <= 90) return "Red";
        return "Invalid";
    }
};
