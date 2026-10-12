class Solution {
public:
    bool isPalindrome(string s) {
        int l=0, r=s.size()-1;

        while(r>=l ){
            while(l<s.size() && !isalnum(s[l])) l++;
            while(r>=0 && !isalnum(s[r])) r--;

            if(r>=0 && l<s.size() && tolower(s[l]) != tolower(s[r])) return false;
            r--;
            l++;
        }
        return true;
    }
};