class Solution {
public:
    bool checkPal(string s,int left,int right){
        while(right > left){
            if(s[left++]!=s[right--]) return false;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int l=0, r=s.size()-1;


        while(r>l){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else{
                return (checkPal(s,l+1,r) || checkPal(s,l,r-1));
            }
        }
        return true;
    }
};