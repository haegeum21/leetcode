/*
    Time complexity: O(n)
    Space complexity: O(n)
*/


class Solution {
public:
    string reverseWords(string s) {
        string ans;
        for(int i = s.length()-1; i >= 0; i--){
            if(s[i]!=' ' && s[i]!='\t'){
                int j = i;
                while(i>=0 && (s[i]!=' ' && s[i]!='\t')){
                    i--;
                }
                i++;
                for(int k = i; k <= j; k++){
                    ans.push_back(s[k]);
                }
                ans.push_back(' ');
            }
            
        }
        ans.pop_back();
        return ans;
    }
};