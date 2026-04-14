/*
 * Problem #3318: Find X-Sum of All K-Long Subarrays I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/03/2026, 12:10:43
 * Link: https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i/
 */

class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        map<int, int> mp;
        vector<int> ans;
        int n = nums.size();

        int l = 0;
        for(int i = 0;i < n;i++){
            mp[nums[i]]++;

            if(i + 1 < k) continue;

            vector<pair<int,int>> vec_freq_val;
            for(auto [val, freq] : mp) vec_freq_val.push_back({freq, val});

            sort(vec_freq_val.begin(), vec_freq_val.end(), greater<>());

            int sum = 0;
            for(int ii = 0;ii < min(x,(int)vec_freq_val.size()) ;ii++) sum += vec_freq_val[ii].first * vec_freq_val[ii].second;
            ans.push_back(sum);

            mp[nums[l]]--;
            l++;
        }
        return ans;
    }
};
