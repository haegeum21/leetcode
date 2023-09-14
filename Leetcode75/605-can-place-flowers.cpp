/*
    Time complexity: O(n)
    Space complexity: O(1)
*/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i = 0; i < flowerbed.size(); i++){
            if(flowerbed[i] == 0 && (flowerbed.size() == i+1 || flowerbed[i+1] == 0) && ( i == 0 || flowerbed[i-1] == 0)){
                i++;
                n--;
            }
        }
        if(n <= 0) return true;
        return false;
    }
};