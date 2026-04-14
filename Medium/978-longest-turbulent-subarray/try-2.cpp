/*
 * Problem #978: Longest Turbulent Subarray
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 02/03/2026, 10:41:40
 * Link: https://leetcode.com/problems/longest-turbulent-subarray/
 */

class Solution {
public:
    int func(vector<int> & arr, int k){
        if(k % 2 == 0){
            if(arr[k] < arr[k + 1]) return 1;
            else if(arr[k] == arr[k + 1]) return 0;
            else return -1;
        }
        else{
            if(arr[k] > arr[k + 1]) return 1;
            else if(arr[k] == arr[k + 1]) return 0;
            else return -1;
        }
        return INT_MIN;
    }
    int maxTurbulenceSize(vector<int>& arr) {
        int l = 0, ans = 1;
        for(int e = 0;e < arr.size()-1; e++){
            if(func(arr, e) == 0){
                l = e + 1;
            }
            else if(func(arr, e) == func(arr, l)) ans = max(ans, e - l + 2);
            else l = e;
        }
        return ans;
    }
};
