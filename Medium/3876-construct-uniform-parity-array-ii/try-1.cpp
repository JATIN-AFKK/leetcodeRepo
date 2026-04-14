/*
 * Problem #3876: Construct Uniform Parity Array II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/03/2026, 08:18:35
 * Link: https://leetcode.com/problems/construct-uniform-parity-array-ii/
 */

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        if(all_of(nums1.begin(), nums1.end(), [](int x){
            return x % 2 == 0;
        })) return true;

        if(all_of(nums1.begin(), nums1.end(), [](int a){
            return a % 2 == 1;
        })) return true;

        int minEven = INT_MAX , minOdd = INT_MAX;
        for(int i = 0;i < nums1.size(); i++){
            if(nums1[i] % 2 == 0) minEven = min(minEven, nums1[i]);
            else minOdd = min(minOdd, nums1[i]);
        }


        cout << minEven << minOdd;
        if(minEven - minOdd >= 1) return true;
        return false;
    }
};
