/*
 * Problem #41: First Missing Positive
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/09/2025, 22:58:54
 * Link: https://leetcode.com/problems/first-missing-positive/
 */

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<long long,bool> mp;
        long long result;
        bool first = true;
        for(auto num : nums){
            mp[num] = true;
        }
        if(mp[1] == 0){
            return 1;
        }
        for(auto ele : mp){
            if(mp.find(ele.first + 1) == mp.end() && ele.first >= 0){
                if(first == true){
                    result = ele.first + 1;
                    first = false;
                }
                else{
                    result = min(ele.first + 1, result);
                }
            }
        }

        return result;
    }
};
