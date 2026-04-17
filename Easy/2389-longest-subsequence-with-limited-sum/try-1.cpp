/*
 * Problem #2389: Longest Subsequence With Limited Sum
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/08/2025, 19:37:43
 * Link: https://leetcode.com/problems/longest-subsequence-with-limited-sum/
 */

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> result;
        for(int i = 1;i <nums.size();i++) nums[i] += nums[i-1];
        for(int q : queries){
            int i = 0,j = nums.size();
            while(i < j){
                int mid = (i + j)/2;
                if(nums[mid] > q){
                    j = mid;
                }
                else{
                    i = mid + 1;
                }
            }
            result.push_back(i);
        }
        return result;
    }
};
