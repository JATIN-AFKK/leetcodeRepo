/*
 * Problem #1838: Frequency of the Most Frequent Element
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/01/2025, 23:21:44
 * Link: https://leetcode.com/problems/frequency-of-the-most-frequent-element/
 */

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long l=0,r=0,t=0,res = 0;

        while(r<nums.size()){
            t = t+nums[r];
            while(nums[r]*(r-l+1)>k+t){
                t-=nums[l];
                l++;
            }
            res = max(res,r-l+1);
            r++;
        }
        return res;    
    }
};
