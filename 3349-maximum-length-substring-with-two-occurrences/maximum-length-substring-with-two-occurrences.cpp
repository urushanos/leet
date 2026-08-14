class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map <char, int> freq;

        int r=0, l=0;
        int maxLen =1;

        for(r=0; r<s.size(); r++){
            freq[s[r]]++;

            while(freq[s[r]] > 2){
                freq[s[l]]--;
                l++;
            }

            maxLen = max(maxLen, r-l+1);
        }

        return maxLen;
    }
};