/*
 * Problem #768: Max Chunks To Make Sorted II
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/09/2025, 18:03:41
 * Link: https://leetcode.com/problems/max-chunks-to-make-sorted-ii/
 */

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefiMax(n),suffiMin(n);
        prefiMax[0] = (arr[0]);
        suffiMin[n-1] = (arr[n-1]);

        for(int i = 1;i < arr.size();i++){
            prefiMax[i] = max(arr[i],prefiMax[i-1]);
            suffiMin[n - i - 1] = min(suffiMin[n - i],arr[n - i - 1]);
        }

        int cut = 1;
        for(int i = 1;i < arr.size();i++){
            if(prefiMax[i-1] <= suffiMin[i]) cut++;
        }
        return cut;
    }
};
