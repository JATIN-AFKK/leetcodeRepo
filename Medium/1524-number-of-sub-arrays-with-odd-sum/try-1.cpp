/*
 * Problem #1524: Number of Sub-arrays With Odd Sum
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 25/02/2025, 22:35:03
 * Link: https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/
 */

class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long re = 0,ec = 0,oc = 0,s = 0;
        for(auto i : arr){
            s+=i;
            if(s%2==1){
                re += ec;
                re++;
                oc++;
            }
            else{
                re += oc;
                ec++;
            }
        }
        return re % int(1e9+7);

    }
};
