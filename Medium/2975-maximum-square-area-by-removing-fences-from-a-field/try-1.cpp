/*
 * Problem #2975: Maximum Square Area by Removing Fences From a Field
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/01/2026, 00:56:45
 * Link: https://leetcode.com/problems/maximum-square-area-by-removing-fences-from-a-field/
 */

class Solution {
public:
    static const long long MOD = 1e9 + 7;

    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        hFences.push_back(1);
        hFences.push_back(m);
        vFences.push_back(1);
        vFences.push_back(n);

        sort(hFences.begin(), hFences.end());
        sort(vFences.begin(), vFences.end());

        unordered_set<long long> hDiffs;
        for (int i = 0; i < hFences.size(); i++) {
            for (int j = i + 1; j < hFences.size(); j++) {
                hDiffs.insert(hFences[j] - hFences[i]);
            }
        }

        long long best = -1;
        for (int i = 0; i < vFences.size(); i++) {
            for (int j = i + 1; j < vFences.size(); j++) {
                long long d = vFences[j] - vFences[i];
                if (hDiffs.count(d)) {
                    best = max(best, d);
                }
            }
        }

        if (best == -1) return -1;
        return (best * best) % MOD;
    }
};

