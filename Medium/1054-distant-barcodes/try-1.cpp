/*
 * Problem #1054: Distant Barcodes
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/02/2026, 13:25:55
 * Link: https://leetcode.com/problems/distant-barcodes/
 */

class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        vector<int> count(10001, 0);
        vector<int> result;
        for(int barcode : barcodes) count[barcode]++;

        priority_queue<pair<int, int>> pq; // {freq, barcode}
        for(int i = 0;i < 10001;i++) if(count[i]) pq.push({count[i], i});

        pair<int, int> pre = {0, -1};

        while(!pq.empty()){
            auto [freq, barcode] = pq.top();
            pq.pop();

            result.push_back(barcode);
            freq--;

            if(pre.first != 0) pq.push(pre);
            pre = {freq, barcode};
        }
        if(pre.first != 0) result.push_back(pre.second);
        return result;
    }
};


