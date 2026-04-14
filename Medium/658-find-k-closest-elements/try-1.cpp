/*
 * Problem #658: Find K Closest Elements
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 03/03/2026, 20:21:42
 * Link: https://leetcode.com/problems/find-k-closest-elements/
 */

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0,totalDis = 0, optimalDis = INT_MAX, optimalStart = -1;
        for(int i = 0;i < arr.size();i++){
            totalDis += abs(x - arr[i]);
            if(i - l + 1 < k) continue;

            if(totalDis < optimalDis){
                optimalDis = totalDis;
                optimalStart = l;
            }

            totalDis -= abs(x - arr[l]);
            l++;
        }
        cout << optimalStart;
        return vector<int>(arr.begin() + optimalStart, arr.begin() + optimalStart + k);
    }
};
