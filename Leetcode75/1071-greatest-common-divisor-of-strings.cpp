/*
    Time complexity: O(n)
    Space complexity: O(n)
*/

class Solution {
public:
    string gcdOfStrings(string s, string t) {
        return (s + t == t + s)? 
        s.substr(0, gcd(size(s),size(t))): "";
    }
};