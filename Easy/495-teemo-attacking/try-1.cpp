/*
 * Problem #495: Teemo Attacking
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 08:59:42
 * Link: https://leetcode.com/problems/teemo-attacking/
 */

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int total = 0;
        for(int i = 0; i < timeSeries.size()-1;i++){
            if(timeSeries[i+1]-timeSeries[i] >= duration){
                total+= duration;
            }
            else{
                total += timeSeries[i+1]-timeSeries[i];
            }
        }

        return total + duration;
    }
};
