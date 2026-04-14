/*
 * Problem #1814: Count Nice Pairs in an Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/02/2026, 15:54:30
 * Link: https://leetcode.com/problems/count-nice-pairs-in-an-array/
 */

class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int> ump;
        int ans = 0;
        for(int num : nums){
            string numStr = to_string(num);
            reverse(numStr.begin(), numStr.end());

            int conditionVal = num - stoi(numStr);

            ans += ump[conditionVal];
            ump[conditionVal]++;

            ans %= (int)(1e9 + 7);
        }
        return ans;

    }
};
