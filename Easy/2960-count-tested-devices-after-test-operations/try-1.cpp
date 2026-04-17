/*
 * Problem #2960: Count Tested Devices After Test Operations
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 19:13:04
 * Link: https://leetcode.com/problems/count-tested-devices-after-test-operations/
 */

class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int decreaser = 0;
        int count = 0;
        for(int percentage : batteryPercentages){
            if(percentage - decreaser > 0){
                count++;
                decreaser++;
            }
        }
        return count;
    }
};
