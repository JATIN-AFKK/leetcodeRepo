/*
 * Problem #2023: Number of Pairs of Strings With Concatenation Equal to Target
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/02/2026, 11:25:22
 * Link: https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/
 */

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        unordered_map<string , int> up;
        int ans = 0;
        for(string current : nums){
            if(current.size() <= target.size()){
                string leftStr = target.substr(0, current.size()); 
                string rightStr = target.substr(target.size() - current.size(), current.size()); 

                if(leftStr == current){
                    string temp = target.substr(current.size());
                    ans += up[temp];
                }
                if(rightStr == current){
                    string temp = target.substr(0, target.size() - current.size());
                    ans += up[temp];
                } 
            }
            up[current]++;
        }
        return ans;
    }
};
