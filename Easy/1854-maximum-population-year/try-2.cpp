/*
 * Problem #1854: Maximum Population Year
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 26/08/2025, 11:42:12
 * Link: https://leetcode.com/problems/maximum-population-year/
 */

class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
       int max_value = 0,ans;
       for(int i = 1950; i <=2050;i++){
            int current = 0;
            for(auto range : logs){
                if(range[0] <= i && range[1] > i){
                    current++;
                }
            }
            if(max_value < current){
                ans = i;
                max_value = current;
            }
        }
        return ans;
    }
};
