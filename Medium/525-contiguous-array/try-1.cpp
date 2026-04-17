/*
 * Problem #525: Contiguous Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 07/10/2025, 22:21:36
 * Link: https://leetcode.com/problems/contiguous-array/
 */

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        mp[0] = -1;
        int count = 0,maxval = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 0){
                count += -1;
            }
            else{
                count += 1;
            }

            if(mp.find(count) != mp.end()){
                maxval = max(maxval,i - mp[count]);
            }
            else{
                mp[count] = i;
            }
        }
        return maxval;
    }
};
