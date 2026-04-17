/*
 * Problem #2570: Merge Two 2D Arrays by Summing Values
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 02/03/2025, 12:06:02
 * Link: https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/
 */

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int> omap;
        vector< vector<int>> result;
        int i;
        for(i = 0; i<nums1.size();i++){
            omap[nums1[i][0]] = nums1[i][1];
        }
        for(i = 0; i<nums2.size();i++){
            if(omap.find(nums2[i][0]) != omap.end()){
                omap[nums2[i][0]] += nums2[i][1];
            }
            else{
                omap[nums2[i][0]] = nums2[i][1];
            }
        }
        for(auto j : omap){
            result.push_back({j.first,j.second});
        }
        return result;
    }
};
