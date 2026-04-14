/*
 * Problem #1481: Least Number of Unique Integers after K Removals
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 09/02/2026, 18:44:14
 * Link: https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/
 */

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> count;
        for(int num : arr) count[num]++;

        vector<int> f;
        for(auto [val, freq] : count) f.push_back(freq);

        sort(f.begin(), f.end());

        int sum = 0;
        for(int i = 0;i < f.size();i++){
            sum += f[i];

            if(sum == k) return f.size() - (i + 1);
            else if(sum > k) return f.size() - i;
        }
        return 0;
    }
};
