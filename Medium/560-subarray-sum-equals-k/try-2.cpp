/*
 * Problem #560: Subarray Sum Equals K
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 14/12/2024, 18:58:02
 * Link: https://leetcode.com/problems/subarray-sum-equals-k/
 */

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixMap;

    prefixMap[0] = 1; 
    int prefixSum = 0, count = 0;

    for (int num : nums) {
        prefixSum += num;


        if (prefixMap.find(prefixSum - k) != prefixMap.end()) {
            count += prefixMap[prefixSum - k];
        }


        prefixMap[prefixSum]++;
    }

    return count;
}
};
