class Solution {
public:
    bool isSubsequence(string s, string t) {
        int slow=0, fast=0;

        while(fast < t.size() && slow<s.size()){
            if(s[slow] == t[fast]) {
                slow++;
            }
            fast++;
        }

        return slow==s.size();
    }
};