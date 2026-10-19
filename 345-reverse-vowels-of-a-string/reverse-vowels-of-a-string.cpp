class Solution {
public:
    bool isVowel(char c){
        if (c == 'a' || c== 'e' || c== 'i' || c== 'o' || c== 'u' || c == 'A' || c== 'E' || c== 'I' || c== 'O' || c== 'U' ){
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int l=0, r=s.size()-1;

        while(r > l){
            if(isVowel(s[l]) && isVowel(s[r])){
                swap(s[l], s[r]);
                l++;
                r--;
            }
            
            if(!isVowel(s[l])) l++;
            if(!isVowel(s[r])) r--;
        }

        return s;
    }
};