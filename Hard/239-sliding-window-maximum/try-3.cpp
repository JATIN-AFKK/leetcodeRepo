/*
 * Problem #239: Sliding Window Maximum
 * Difficulty: Hard
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 14/12/2025, 19:28:42
 * Link: https://leetcode.com/problems/sliding-window-maximum/
 */

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        deque<int> dq;
        for(int i = 0;i < k; i++){
            while(!dq.empty() && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        result.push_back(nums[dq.front()]);

        for(int r = k; r < nums.size(); r++){
            if(dq.front() == r - k) dq.pop_front();
            while(!dq.empty() && nums[dq.back()] <= nums[r]){
                dq.pop_back();
            }
            dq.push_back(r);
            result.push_back(nums[dq.front()]);
        }
        return result;
    }
};
