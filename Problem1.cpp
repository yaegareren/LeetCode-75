// LC - 1768
// You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string. Return the merged string.

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size(), n2 = word2.size(); 
        string ans; 
        // loop runs till either word 1 or word 2 has any character left 
        for(int i=0; i < n1 || i < n2; i++){
            if(i < n1)
                ans += word1[i]; 

            if(i < n2)
                ans += word2[i]; 
        }
        return ans; 
    }
};
// time complexity: O(max(n1, n2)) 
// space complexity: O(1)
