/*
 * Problem #3371: Identify the Largest Outlier in an Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/02/2026, 19:38:51
 * Link: https://leetcode.com/problems/identify-the-largest-outlier-in-an-array/
 */

class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        unordered_map<int,int> up;
        int total = 0;
        for(int num : nums) up[num]++;
        total = accumulate(nums.begin(), nums.end(), 0);
        int ans = INT_MIN;
        for(int x : nums){

            int rest = total - 2*x;
            up[x]--;
            if(up[rest] > 0) ans = max(ans, rest);
            up[x]++;
        }

        cout << total;
        return ans;
    }
};
