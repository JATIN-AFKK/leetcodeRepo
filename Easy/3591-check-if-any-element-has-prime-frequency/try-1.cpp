/*
 * Problem #3591: Check if Any Element Has Prime Frequency
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 05/02/2026, 15:11:05
 * Link: https://leetcode.com/problems/check-if-any-element-has-prime-frequency/
 */

class Solution {
public:
    bool isPrime(int n){
        for(int i = 2;i*i <= n;i++){
            if(n%i == 0 ) return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        vector<int> count(101, 0);
        for(int num : nums) count[num]++;

        for(int freq : count){
            if(freq == 0 || freq == 1) continue;
            if(isPrime(freq)) return true;
        }
        return false;
    }
};
