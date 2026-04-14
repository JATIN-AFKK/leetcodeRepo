/*
 * Problem #945: Minimum Increment to Make Array Unique
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 08/02/2026, 10:55:26
 * Link: https://leetcode.com/problems/minimum-increment-to-make-array-unique/
 */

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        vector<int> vec(1e5 + 1, 0);
        for(int num : nums) vec[num]++;

        int ans = 0;
        for(int i = 0;i < vec.size() - 1;i++){
            if(vec[i] > 1){
                ans += vec[i] - 1;
                vec[i + 1] += vec[i] - 1;
            }
        }

        if(vec[vec.size() - 1] > 1){
            int ex = vec.back() - 1;
            ans += (ex*(ex + 1))/2;
        }
        return ans;
    }
};
