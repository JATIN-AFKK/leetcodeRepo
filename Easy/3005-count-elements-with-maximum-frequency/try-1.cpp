/*
 * Problem #3005: Count Elements With Maximum Frequency
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 02/02/2026, 12:10:37
 * Link: https://leetcode.com/problems/count-elements-with-maximum-frequency/
 */

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> vec(100, 0);
        for(int i = 0;i < nums.size();i++) vec[nums[i] - 1]++;

        int max_freq = 0, count = -1;
        for(int freq : vec ){
            if(freq == 0) continue;
            
            if(max_freq < freq){
                max_freq = freq;
                count = 1;
            }
            else if(max_freq == freq){
                count++;
            }
        }
        return count*max_freq;
    }
};
