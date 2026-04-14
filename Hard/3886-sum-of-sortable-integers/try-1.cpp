/*
 * Problem #3886: Sum of Sortable Integers
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 29/03/2026, 09:00:08
 * Link: https://leetcode.com/problems/sum-of-sortable-integers/
 */

class Solution {
public:
    bool canBe(vector<int> &nums, int st, int k){
        int size = k;
        int count = 0;
        for(int i = 0; i < k; i++){
            if(nums[st + i] > nums[st + ((i + 1) % k)]) count++;
        }
        return count <= 1;
    }
    int sortableIntegers(vector<int>& nums) {
        vector<int> divisor;
        int n = nums.size();
        for(int i = 1; i * i <= n; i++){
            if(n % i == 0) {
                divisor.push_back(i);
                if(n/i != i) divisor.push_back(n / i);
            }
        }

        int ans = 0;
        for(auto k : divisor){
            int sub = 0;
            int pre = INT_MIN;
            for(int i = 0;i < n; i += k){
                if(canBe(nums, i, k)){
                    int mini = *min_element(nums.begin() + i, nums.begin() + i + k);
                    if(pre <= mini) sub++;
                    else break;
                    pre = *max_element(nums.begin() + i, nums.begin() + i + k);
                }
                else break;   
            }
            if(sub == (n/k)) ans += k;
        }
        return ans;
        
    }
};
