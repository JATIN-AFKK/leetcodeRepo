/*
 * Problem #2442: Count Number of Distinct Integers After Reverse Operations
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/02/2026, 22:49:20
 * Link: https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/
 */

class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> us;
        for(int num : nums){
            us.insert(num);
            int ans = 0;
            while(num){
                ans = ans * 10 + num % 10;
                num /= 10;
            }
            us.insert(ans);
        }
        return us.size();
    }
};
