class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="") return true;
        if(s.size() > t.size()) return false;

        int slow=0, fast=0;

        while(fast < t.size() && slow<s.size()){
            if(s[slow] == t[fast]) {
                //if(s[s.size()-1] == t[fast]) return true;    
                slow++;
            }
            fast++;
        }

        if(slow == s.size()) return true;
        else return false;
    }
};