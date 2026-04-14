/*
 * Problem #1011: Capacity To Ship Packages Within D Days
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/03/2026, 12:55:34
 * Link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
 */

class Solution {
public:
    int count(vector<int>& nums, int weight){
        int current = 0, time = 0;
        for(int i = 0;i < nums.size(); i++){
            current += nums[i];
            if(current > weight){
                current = nums[i];
                time++;
            }
        }
        return time + 1;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int minWeight = *max_element(weights.begin(), weights.end());
        int maxWeight = accumulate(weights.begin(), weights.end(), 0);

        int ans = INT_MAX;
        while(minWeight <= maxWeight){
            int mid = (minWeight + maxWeight)/2;
            if(count(weights, mid) > days){
                minWeight = mid + 1;
            }
            else{
                ans = min(ans, mid);
                maxWeight = mid - 1;
            }
        }
        return ans;
    }
};
