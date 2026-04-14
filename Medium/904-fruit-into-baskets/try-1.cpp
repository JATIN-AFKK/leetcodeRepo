/*
 * Problem #904: Fruit Into Baskets
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/03/2026, 22:37:34
 * Link: https://leetcode.com/problems/fruit-into-baskets/
 */

class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int l = -1, distinct = 0, ans = INT_MIN;
        unordered_map<int, int> up;

        for(int e = 0;e < nums.size();e++){
            if(++up[nums[e]] == 1) distinct++;

            while(distinct > 2){
                l++;
                if(--up[nums[l]] == 0) distinct--;
            }

            ans = max(ans, e - l);
        }
        return ans;
    }
};
