/*
 * Problem #2147: Number of Ways to Divide a Long Corridor
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/12/2025, 01:09:41
 * Link: https://leetcode.com/problems/number-of-ways-to-divide-a-long-corridor/
 */

class Solution {
public:
    int numberOfWays(string corridor) {
        int setCount = 0, curPlant = 0;
        long long ans = 1;
        int mod = 1e9 + 7;
        for(int i = 0;i < corridor.size();i++){
            if(corridor[i] == 'S'){
                setCount++;
                if(setCount != 1 && setCount % 2 == 1){
                    ans *= (curPlant + 1);
                    ans %= mod;
                }
                curPlant = 0;
            }
            if(corridor[i] == 'P') curPlant++;
        }
        if(setCount % 2 == 1 || setCount < 2) return 0;
        return (int)ans;
    }
};
