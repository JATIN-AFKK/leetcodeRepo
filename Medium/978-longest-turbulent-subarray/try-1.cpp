/*
 * Problem #978: Longest Turbulent Subarray
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 02/03/2026, 10:35:19
 * Link: https://leetcode.com/problems/longest-turbulent-subarray/
 */

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        vector<int> rr;
        for(int k = 0;k < arr.size() - 1;k++){
            if(k % 2 == 0){
                if(arr[k] < arr[k + 1]) rr.push_back(1);
                else if(arr[k] == arr[k + 1]) rr.push_back(0);
                else rr.push_back(-1);
            }
            else{
                if(arr[k] > arr[k + 1]) rr.push_back(1);
                else if(arr[k] == arr[k + 1]) rr.push_back(0);
                else rr.push_back(-1);
            }
        }
        int l = 0, ans = 1;
        for(int e = 0;e < rr.size(); e++){
            if(rr[e] == 0){
                l = e + 1;
            }
            else if(rr[e] == rr[l]) ans = max(ans, e - l + 2);
            else l = e;
        }
        return ans;
    }
};
