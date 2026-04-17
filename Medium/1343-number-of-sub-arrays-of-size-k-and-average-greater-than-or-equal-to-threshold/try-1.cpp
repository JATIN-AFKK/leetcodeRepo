/*
 * Problem #1343: Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/12/2025, 15:17:54
 * Link: https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/
 */

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sumThreashold = threshold * k;
        int sum = 0;
        int count = 0;
        for(int i = 0;i < k; i++){
            sum += arr[i];
        }
        if(sum >= sumThreashold) count++;

        for(int i = k;i < arr.size(); i++){
            sum += (arr[i] - arr[i - k]);
            if(sum >= sumThreashold) count++;
        }

        return count;
    }
};
