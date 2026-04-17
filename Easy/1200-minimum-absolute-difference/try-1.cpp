/*
 * Problem #1200: Minimum Absolute Difference
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/01/2026, 23:11:06
 * Link: https://leetcode.com/problems/minimum-absolute-difference/
 */

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());

        vector<vector<int>> result;
        int mindiff = arr[1] - arr[0];
        int n = arr.size();

        for(int i = 0;i < n-1;i++) mindiff = min(mindiff, arr[i+1] - arr[i]);

        for(int i = 0;i < n-1;i++){
            if(arr[i+1] - arr[i] == mindiff){
                result.push_back({arr[i], arr[i+1]});
            }
        }
        return result;

    }
};
