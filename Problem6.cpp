// LC - 151 
// Given an input string s, reverse the order of the words. A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space. Return a string of the words in reverse order concatenated by a single space. Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

class Solution {
public:
    string reverseWords(string s) {
        // reverse whole string 
        reverse(s.begin(),s.end()); 

        int i = 0; // to traverse the string 
        int l = 0, r =0; // used to reverse the words in reversed string 

        int n = s.length(); 
        while(i < n){
            while(i < n && s[i] != ' ')  // if i finds character it gives that character to r and moves ahead 
            {
                s[r++] = s[i++]; 
                // i++; r++; 
            }

            if(l < r) // to reverse the words 
            {
                reverse(s.begin()+l, s.begin()+r); 

                s[r] = ' '; // r assigns a space to itself
                r++; 

                l = r; // l is brought to the same position as r 
            }

            i++; // i keeps on moving 
        }
        s = s.substr(0, r-1); 
        return s; 
    }
};
