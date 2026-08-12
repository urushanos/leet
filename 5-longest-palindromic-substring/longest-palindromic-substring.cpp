class Solution {
public:
    int length(int l, int r, string& s){
        while(l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        return r-l-1;
    }

    string longestPalindrome(string s) {
        int start=0, maxlen=0;

        for(int i=0; i<s.size(); i++){
            int len1 = length(i, i, s);
            int len2 = length(i, i+1, s);

            int len = max(len1, len2);

            if(len>maxlen){
                maxlen = len;
                start = i - (len-1)/2;
            }
        }
        
        return s.substr(start, maxlen);
    }
};