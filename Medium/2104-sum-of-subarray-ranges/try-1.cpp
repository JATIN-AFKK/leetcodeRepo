/*
 * Problem #2104: Sum of Subarray Ranges
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/12/2025, 17:14:01
 * Link: https://leetcode.com/problems/sum-of-subarray-ranges/
 */

class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        stack<int> stkInc, stkDec;
        vector<int> LMin(n), RMin(n), LMax(n), RMax(n);
        long long ans = 0;

        for(int i = 0;i < n; i++){
            while(!stkInc.empty() && nums[stkInc.top()] >= nums[i]){
                RMin[stkInc.top()] = i;
                stkInc.pop();
            }
            while(!stkDec.empty() && nums[stkDec.top()] <= nums[i]){
                RMax[stkDec.top()] = i;
                stkDec.pop();
            }

            LMin[i] = stkInc.empty() ? -1 : stkInc.top();
            LMax[i] = stkDec.empty() ? -1 : stkDec.top();

            stkInc.push(i);
            stkDec.push(i);
        }
        while(!stkInc.empty()){
            RMin[stkInc.top()] = n;
            stkInc.pop();
        }
        while(!stkDec.empty()){
            RMax[stkDec.top()] = n;
            stkDec.pop();
        }
        for(int i = 0;i < n;i++){
            long long diff = (long long) nums[i]*(i - LMax[i])*(RMax[i] - i) - (long long) nums[i] * (i - LMin[i])*(RMin[i] - i);
            ans += diff;
        }
        return ans;
    }
};
