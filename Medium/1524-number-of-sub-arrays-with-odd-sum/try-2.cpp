/*
 * Problem #1524: Number of Sub-arrays With Odd Sum
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 17/09/2025, 10:57:49
 * Link: https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/
 */

class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int odd = 0,even = 1;
        int sum = 0;
        long long count = 0;
        int const mod = 1e9 + 7;
        for(int i = 0;i < arr.size();i++){
            sum += arr[i];
            if(sum % 2 == 1){
                count += even;
                odd++;
            }
            else{
                count += odd;
                even++;
            }
        }
        return count % mod;
    }
};
