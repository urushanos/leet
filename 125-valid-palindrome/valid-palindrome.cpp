class Solution {
public:
    bool isPalindrome(string s) {
        string lower;

        for(char c : s){
            if (isalnum(c)){
                lower += tolower(c);
            }
        }
    int l=0, r=lower.size()-1;

        while(r>l){
            if(lower[r] != lower[l]) return false;
            else if(lower[r]==' ') r--;
            else if(lower[l] == ' ') l++;
            else{
                r--;
                l++;
            } 
        }
        return true;
    }
};