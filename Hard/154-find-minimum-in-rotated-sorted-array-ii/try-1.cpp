/*
 * Problem #154: Find Minimum in Rotated Sorted Array II
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/01/2025, 23:47:28
 * Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
 */

class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums[0] < nums[nums.size() - 1]) {
            return nums[0]; 
        }

        int i = 0, j = nums.size() - 1;

        while (i < j) { 
            int mid = i + (j - i) / 2;
            if (nums[i] == nums[j]) {
                i++;
                continue;
            }

            if (nums[mid] <= nums[j]) {
                j = mid; 
            }
            else {
                i = mid + 1; 
            }
        }
        return nums[i]; 
    }
};

