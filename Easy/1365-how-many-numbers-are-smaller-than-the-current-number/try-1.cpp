/*
 * Problem #1365: How Many Numbers Are Smaller Than the Current Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/08/2025, 11:32:31
 * Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
 */

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> vec(101,0);
        vector<int> result;
        for(int i = 0;i < nums.size();i++){
            vec[nums[i]]++;
        }
        int sum = 0;
        for(int i = 1;i<vec.size();i++){
            vec[i] = vec[i] + vec[i-1];
        }
        for(int i : nums){
            if(i!=0) result.push_back(vec[i-1]);
            else result.push_back(0);
        }
        return result;
    }
};
