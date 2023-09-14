/*
    Time Complexity: O(n), where n is the length of the longer string
    Space Complexity: O(n), where n is the length of the longer string
*/
class Solution {
public:
    string mergeAlternately(string s, string t) {
        string ans;
        for(int i = 0 ; i < s.size() || i < t.size(); i++){
            if(i < s.size()) ans.push_back(s[i]);
            if(i < t.size()) ans.push_back(t[i]);
        }
        return ans;
    }
};