/*
 * Problem #923: 3Sum With Multiplicity
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/02/2026, 00:47:48
 * Link: https://leetcode.com/problems/3sum-with-multiplicity/
 */

class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        long long count = 0;
        for(int i = 0;i < arr.size();i++){
            int newTarget = target - arr[i];
            unordered_map<int,int> up;
            for(int j = i + 1;j < arr.size();j++){
                int required = newTarget - arr[j];
                if(up.find(required)!= up.end()) count += up[required];
                up[arr[j]]++;

                count %= (long long)1e9 + 7;
            }
        }
        return (int)count;

    }
};
