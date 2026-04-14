/*
 * Problem #2244: Minimum Rounds to Complete All Tasks
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/02/2026, 12:31:15
 * Link: https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/
 */

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> up;
        for(int task : tasks) up[task]++;

        int ans = 0;
        for(auto [task , count] : up){
            if(count == 1) return -1;
            if(count % 3 == 1) ans += (count/3) + 1;
            else ans += (count+1)/3;
            
        }
        return ans;
    } 
};
