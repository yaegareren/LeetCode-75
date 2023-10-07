// LC - 345 
// Given a string s, reverse only all the vowels in the string and return it. The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.
class Solution {
public:

    bool isVowel(char &ch){
        if(ch=='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u' ||
            ch=='A' || ch == 'E' || ch == 'I' || ch == 'O' || ch =='U'){
                return true; 
            }
        return false; 
    }

    string reverseVowels(string s) {
        int high = s.size() - 1; 
        int low = 0; 

        while(low<high){
            if(!isVowel(s[low])){
                low++; 
            }
            else if(!isVowel(s[high])){
                high--; 
            }
            else { // both are vowels 
            swap(s[low], s[high]); 
                low++; high--; 
            }
        }
        return s; 
    }
};
