/*
 * Problem #303: Range Sum Query - Immutable
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 06/03/2025, 16:12:42
 * Link: https://leetcode.com/problems/range-sum-query-immutable/
 */

class NumArray {
    unordered_map<int,int> umap;
public:
    NumArray(vector<int>& nums) {
        umap[-1] = 0;
        int s = 0;
        for(int i = 0;i < nums.size();i++){
            s += nums[i];
            umap[i] = s;
        }
    }

    int sumRange(int left, int right) {
        return umap[right] - umap[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
