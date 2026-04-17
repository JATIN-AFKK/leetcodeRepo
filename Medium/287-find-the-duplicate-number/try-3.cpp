/*
 * Problem #287: Find the Duplicate Number
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 18/01/2025, 00:20:07
 * Link: https://leetcode.com/problems/find-the-duplicate-number/
 */

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        int i;
        for(i = 0 ; i<nums.size()-1;i++){
            map[nums[i]]++;
            if(map[nums[i]]>1){
                break;
            }
        }
        return nums[i];
    }
};
