/*
 * Problem #3354: Make Array Elements Equal to Zero
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/08/2025, 15:47:06
 * Link: https://leetcode.com/problems/make-array-elements-equal-to-zero/
 */

class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        vector<int> prefix(nums.size(),0);
        prefix[0] = nums[0];
        int count = 0;
        for(int i = 1;i < nums.size();i++){
            prefix[i] = prefix[i-1] + nums[i];
        }
        int sum = 0;
        for(int i = 0;i <nums.size();i++){
            if(nums[i] == 0 ){
                if(sum == prefix[prefix.size()-1] -sum){
                    count+=2;
                }
                else if(abs(prefix[prefix.size()-1] - 2*sum) == 1){
                    count++;
                }
            }
            sum = prefix[i];
        }
        return count;
    }
};
