/*
 * Problem #3591: Check if Any Element Has Prime Frequency
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 05/02/2026, 15:24:27
 * Link: https://leetcode.com/problems/check-if-any-element-has-prime-frequency/
 */

class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        vector<int> count(101, 0);
        for(int num : nums) count[num]++;

        int maxFreq = 0;
        for(int freq : count){
            maxFreq = max(maxFreq, freq);
        }


        vector<bool> isPrime(maxFreq + 1, true);
        if(maxFreq >= 0) isPrime[0] = false;
        if(maxFreq >= 1) isPrime[1] = false;

        for(int i = 2;i*i <= maxFreq;i++){
            if(isPrime[i]){
                for(int j = i*i;j <= maxFreq;j += i) isPrime[j] = false;
            }
        }

        for(int freq : count){
            if(freq > 1 && isPrime[freq]) return true;
        }
        return false;
    }
};
