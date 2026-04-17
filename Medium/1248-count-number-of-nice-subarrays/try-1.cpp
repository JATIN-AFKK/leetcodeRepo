/*
 * Problem #1248: Count Number of Nice Subarrays
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/09/2025, 08:35:15
 * Link: https://leetcode.com/problems/count-number-of-nice-subarrays/
 */

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> up;
        up[0] = 1;
        int odd = 0;
        int count = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i]%2)  odd++;
            up[odd]++;
        }
        for(int j = 0;j <= odd;j++){
            count += up[j - k]*up[j];
        }
        return count;
    }    
};
