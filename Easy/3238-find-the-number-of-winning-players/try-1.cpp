/*
 * Problem #3238: Find the Number of Winning Players
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/02/2026, 11:13:21
 * Link: https://leetcode.com/problems/find-the-number-of-winning-players/
 */

class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        unordered_map<int, vector<int>> mp;

        for(int i = 0;i < n;i++){
            mp[i] = vector<int> (11, 0);
        }

        int count = 0;
        for(auto p : pick) mp[p[0]][p[1]]++;

        for(auto play_ball : mp){
            int player = play_ball.first;
            for(int i = 0;i <= 10;i++){
                if(play_ball.second[i] > player){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};
