/*
 * Problem #811: Subdomain Visit Count
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 07/02/2026, 17:06:17
 * Link: https://leetcode.com/problems/subdomain-visit-count/
 */

class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> up;
        for(string & word : cpdomains){
            int spacePos = word.find(' ');
            int count = stoi(word.substr(0, spacePos));;
            string domain = word.substr(spacePos + 1);

            up[domain] += count;
            for(int i = 0;i < domain.size();i++){
                if(domain[i] != '.') continue;

                string subDomain = domain.substr(i + 1);
                up[subDomain] += count;
            }
        }
        vector<string> ans;
        for(auto & p : up) ans.push_back(to_string(p.second) + ' ' + p.first);
        return ans;
    }
};
