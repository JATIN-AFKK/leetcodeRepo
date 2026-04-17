/*
 * Problem #3731: Find Missing Elements
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 02/11/2025, 08:07:23
 * Link: https://leetcode.com/problems/find-missing-elements/
 */

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l = nums[0],h = nums[nums.size()-1];
        vector<int> vec;
        for(int i = 0;i < nums.size();i++){
            if(l == nums[i]){
                l++;
            }
            else{
                vec.push_back(l);
                l++;
                i--;
            }
        }
        return vec;
    }
};
