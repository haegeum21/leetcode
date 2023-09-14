/*
    Time complexity: O(n)
    Space complexity: O(n)
*/

class Solution {
public:
    string reverseVowels(string s) {
        for(int i = 0, j = s.size()-1; i < s.size() && j >= 0; i++){
            if(strchr("oaeiuUAEIO", s[i])){
                while(i < j){
                    if(strchr("oaeiuUAEIO", s[j])){
                        swap(s[i], s[j]);
                        j--;
                        break;
                    }
                    j--;
                }
            }
        }
        return s;
    }
};