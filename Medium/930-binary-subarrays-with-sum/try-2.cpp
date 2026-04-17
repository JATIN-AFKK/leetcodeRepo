/*
 * Problem #930: Binary Subarrays With Sum
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 16/09/2025, 12:16:57
 * Link: https://leetcode.com/problems/binary-subarrays-with-sum/
 */

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return atmost(nums,goal) - atmost(nums,goal-1);
    }
    int atmost(vector<int> vec,int goal){
        if(goal < 0) return 0;
        int left = 0,sum = 0,count = 0;
        for(int right = 0;right < vec.size();right++){
            sum += vec[right];
            while(sum > goal){
                sum -= vec[left];
                left++;
            }
            count += right - left + 1;
        }
        return count;
    }
};
