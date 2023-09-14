/*
    Time complexity: O(n)
    Space complexity: O(n)
*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = *max_element(candies.begin(), candies.end());
        vector<bool> ans;

        for(int i = 0; i < candies.size(); i++){
            (candies[i]+extraCandies >= m) ? ans.push_back(true) : ans.push_back(false);
        }
        return ans;
    }
};