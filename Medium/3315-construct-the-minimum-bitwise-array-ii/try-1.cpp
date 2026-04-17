/*
 * Problem #3315: Construct the Minimum Bitwise Array II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 21/01/2026, 23:44:25
 * Link: https://leetcode.com/problems/construct-the-minimum-bitwise-array-ii/
 */

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> vec;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 2){
                vec.push_back(-1);
                continue;
            }
            else{
                int dn = nums[i], count = 0;
                while(dn % 2){
                    dn /= 2;
                    count++;
                }
                dn *= 2;
                dn++;
                dn <<= (count-1);
                dn--;
                vec.push_back(dn);
            }
        }
        return vec;
    }
};
