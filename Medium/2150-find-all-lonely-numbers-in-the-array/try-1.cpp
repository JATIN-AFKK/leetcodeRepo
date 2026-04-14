/*
 * Problem #2150: Find All Lonely Numbers in the Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/02/2026, 00:14:59
 * Link: https://leetcode.com/problems/find-all-lonely-numbers-in-the-array/
 */

class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        array<int, 1000003> count = {};

        int minval = INT_MAX, maxval = INT_MIN;
        for(int num : nums){
            count[num + 1]++;
            minval = min(minval, num + 1);
            maxval = max(maxval, num + 1);
        }

        vector<int> ans;
        for(int i = minval;i <= maxval;i++){
            if(count[i] == 1 && count[i-1] == 0 && count[i+1] == 0) ans.push_back(i - 1);
        }
        return ans;
    }
};
