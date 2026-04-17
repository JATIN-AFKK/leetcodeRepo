/*
 * Problem #3732: Maximum Product of Three Elements After One Replacement
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 02/11/2025, 08:20:26
 * Link: https://leetcode.com/problems/maximum-product-of-three-elements-after-one-replacement/
 */

class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](int a,int b){
            return abs(a) < abs(b);
        });
        int n = nums.size();
        for(int x : nums){
            cout<<x<<"\n";
        }
        return 1e5 *  abs((long long)nums[n-1]*(long long)nums[n-2]);
       
    }
};
