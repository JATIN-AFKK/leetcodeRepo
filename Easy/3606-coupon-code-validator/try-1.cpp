/*
 * Problem #3606: Coupon Code Validator
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/12/2025, 12:03:28
 * Link: https://leetcode.com/problems/coupon-code-validator/
 */

class Solution {
public:
    unordered_map<string, int> catigoryMap = {
        {"electronics" , 0}, 
        {"grocery" , 1}, 
        {"pharmacy" , 2}, 
        {"restaurant" , 3}
    };

    bool isValidCatigory(string catigory){
        if(catigoryMap.find(catigory) != catigoryMap.end()) return true;
        return false;
    }
    bool isValidCode(string code){
        if(code.empty()) return false;
        string modifiedCode = "";
        for(char ch : code){
            if(ch == '_') continue;
            else if(!isalnum(ch)) return false;
        }
        return true;
        
    }
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<vector<string>> resultVector(4,vector<string>(0));
        for(int i = 0;i < isActive.size(); i++){
            if(!isActive[i]) continue;
            if(!isValidCatigory(businessLine[i])) continue;
            if(!isValidCode(code[i])) continue;
            
            int ind = catigoryMap[businessLine[i]];
            resultVector[ind].push_back(code[i]);
        }
        vector<string> result;
        for(auto &vec : resultVector){
            sort(vec.begin(), vec.end());
            result.insert(result.end(), vec.begin(), vec.end());
        }
        return result;
    }
};
