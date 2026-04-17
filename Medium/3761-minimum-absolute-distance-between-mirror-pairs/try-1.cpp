/*
 * Problem #3761: Minimum Absolute Distance Between Mirror Pairs
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/04/2026, 19:39:55
 * Link: https://leetcode.com/problems/minimum-absolute-distance-between-mirror-pairs/
 */

class Solution {
public:
    int reverse(int n){
        int a = 0;
        while(n){
            a*=10;
            a += (n % 10);
            n/=10;
        }
        return a;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int> up;
        int ans = INT_MAX;
        int n = nums.size();
        for(int i = 0;i < n; i++){
            int jval = nums[i];
            if(up.count(jval)) {
                ans = min(ans, abs(i - up[jval]));
            }
            up[reverse(jval)] = i;
        }
        // for(auto [a, b] : up) cout << a << " " << b << endl;
        if(ans == INT_MAX) return -1;
        return ans;

    }
};
