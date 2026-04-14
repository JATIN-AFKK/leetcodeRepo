/*
 * Problem #1390: Four Divisors
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/04/2026, 20:18:11
 * Link: https://leetcode.com/problems/four-divisors/
 */

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int total = 0;
        for(int num : nums){
            int sum = 0;
            int count = 0;
            for(int i = 1;i * i <= num; i++){
                if(num % i == 0){
                    sum += i;
                    sum += num/i;
                    count += 2;
                    if(num/i == i) count--;
                }
            }
            if(count == 4) total += sum;
        }
        return total;
    }
};
