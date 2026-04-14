/*
 * Problem #1726: Tuple with Same Product
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/02/2026, 18:05:25
 * Link: https://leetcode.com/problems/tuple-with-same-product/
 */

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> up;
        int n = nums.size();

        for(int i = 1;i < n;i++){
            for(int j = 0;j < i;j++){
                up[nums[i]*nums[j]]++;
            }
        }

        int ans = 0;
        for(auto &[vsl, freq] : up){
            ans += 4*(freq-1)*freq;
        }
        return ans;
    }
};
