/*
 * Problem #42: Trapping Rain Water
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/09/2025, 17:14:40
 * Link: https://leetcode.com/problems/trapping-rain-water/
 */

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> pre(n);
        vector<int> suf(n);

        suf[n-1] = height[n-1];
        pre[0] = height[0];

        for(int i = 1;i < n;i++){
            pre[i] = max(pre[i-1],height[i]);
        }
        for(int i = n-2;i  >= 0;i--){
            suf[i] = max(suf[i+1],height[i]);
        }

        int count = 0;
        for(int i = 0;i < n;i++){
            count += max(0,min(pre[i],suf[i]) - height[i]);
        }
        return count;

    }
};
