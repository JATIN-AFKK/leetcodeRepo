/*
 * Problem #2404: Most Frequent Even Element
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 12:06:06
 * Link: https://leetcode.com/problems/most-frequent-even-element/
 */

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> up;
        int count = 0, ans = -1;
        for(int num : nums){
            if(num%2 == 1) continue;
            up[num]++;
            if(count < up[num]){
                ans = num;
                count = up[num];
            } 
            else if(count == up[num]){
                ans = min(ans, num);
            }
        }
        return ans;
    }
};
