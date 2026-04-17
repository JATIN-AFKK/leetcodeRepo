/*
 * Problem #930: Binary Subarrays With Sum
 * Difficulty: Medium
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 16/09/2025, 22:46:15
 * Link: https://leetcode.com/problems/binary-subarrays-with-sum/
 */

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum = 0,count = 0;
        unordered_map<int,int> up;
        up[0] = 1;
        for(int i = 0;i < nums.size();i++){
            sum += nums[i];
            if(up.find(sum - goal) != up.end()){
                count += up[sum - goal];
            }
            up[sum]++;
        }
        return count;
    }
};
