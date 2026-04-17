/*
 * Problem #2239: Find Closest Number to Zero
 * Difficulty: Easy
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 13/12/2024, 05:56:16
 * Link: https://leetcode.com/problems/find-closest-number-to-zero/
 */

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mx=INT_MAX;
        for(int i : nums){
            if (abs(mx)>abs(i)){
                mx=i;
            }
            else if (abs(mx)==abs(i)){
                mx=max(mx,i);
            }
        }
        return mx;
    }
};
