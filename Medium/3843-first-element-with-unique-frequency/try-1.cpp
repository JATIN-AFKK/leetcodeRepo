/*
 * Problem #3843: First Element with Unique Frequency
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/02/2026, 17:43:15
 * Link: https://leetcode.com/problems/first-element-with-unique-frequency/
 */

class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> up;
        unordered_map<int,int> upf;
        for(int num : nums) up[num]++;
        for(auto &p : up) upf[p.second]++;

        for(int num : nums) if(upf[up[num]] == 1) return num;
        return -1;

    }
};
