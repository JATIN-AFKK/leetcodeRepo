/*
 * Problem #3678: Smallest Absent Positive Greater Than Average
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/09/2025, 20:29:20
 * Link: https://leetcode.com/problems/smallest-absent-positive-greater-than-average/
 */

class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        set<int> st(nums.begin(),nums.end());
        float mean = 0;
        for(auto num : nums){
            mean += num;
        }
        mean /= nums.size();
        int result = mean + 1;
        result = max(1,result);
        while(st.count(result)!=0){
            result++;
        }
        return result;
    }
};
