// 392. Is Subsequence
// Given two strings s and t, return true if s is a subsequence of t, or false otherwise. A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.length();
        int n = t.length();
        int i = 0; int j = 0; 
        while(i < m && j < n){
            if(s[i] == t[j]){ // i(th) character of s in t
                i++; 
            }
            j++; 
        }
        if(i == m)
            return true; 
        return false; 
    }
};
