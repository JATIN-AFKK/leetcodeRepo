/*
 * Problem #3164: Find the Number of Good Pairs II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/03/2026, 00:19:14
 * Link: https://leetcode.com/problems/find-the-number-of-good-pairs-ii/
 */

class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        unordered_map<int, int> freq;
        for(int i = 0;i < nums2.size();i++) freq[nums2[i]]++;

        long long ans = 0;
        for(int num : nums1){
            for(int i = 1;i * i <= num; i++){
                if(num % i != 0) continue;
                if(i % k == 0){
                    ans += freq[num / i];
                    if(i == num / i) continue;
                }
                if((num / i) % k == 0){
                    ans += freq[i];
                }

            }
        }
        return ans;
    }
};
