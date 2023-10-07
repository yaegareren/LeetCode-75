// LC - 605
// You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots. Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int l = flowerbed.size(); 

        if(n == 0) return true; // 0 flowers remaining

        for(int i=0; i<l; i++){
            if(flowerbed[i] == 0){
                bool leftEmpty = (i== 0) || (flowerbed[i-1] == 0); 
                bool rightEmpty = (i == l-1) || (flowerbed[i+1] == 0);

            if(leftEmpty && rightEmpty){
                flowerbed[i] = 1; // flower planted
                n--; 
            }
            if(n == 0) return true;
            }
        }
        return false; 
    }
};
