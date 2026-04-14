/*
 * Problem #3896: Minimum Operations to Transform Array into Alternating Prime
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/04/2026, 20:51:41
 * Link: https://leetcode.com/problems/minimum-operations-to-transform-array-into-alternating-prime/
 */

class Solution {
public:
    int N = 1e6 + 1;
    static vector<bool> isprime;
    static vector<int> primes;
    
    void seive(){
        isprime.assign(N, true);
        isprime[0] = false;
        isprime[1] = false;

        for(int i = 2; i * i < N; i++){
            if(!isprime[i]) continue;
            for(int j = i * i; j < N; j += i){
                isprime[j] = false;
            }
        }
        for(int i = 0;i < N; i++) if(isprime[i]) {
            primes.push_back(i);
        }
    }
    int minOperations(vector<int>& nums){
        if(isprime.empty()) seive();
        int count = 0;
        for(int i = 0;i < nums.size(); i++){
            if(i % 2 == 1){
                if(isprime[nums[i]]){
                    int k = nums[i];
                    while(isprime[k]){
                        k++;
                        count++;
                    }
                }
            }
            else if(!isprime[nums[i]]){
                int x = nums[i];
                while(!isprime[x]){
                    count++;
                    x++;
                }
            }
        }
        return count;
    }
};
vector<bool> Solution :: isprime;
vector<int> Solution :: primes;
