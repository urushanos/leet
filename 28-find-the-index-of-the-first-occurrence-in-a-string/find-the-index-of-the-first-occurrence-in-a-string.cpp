class Solution {
public:
    int strStr(string haystack, string needle) {
        int l=0, r=needle.size()-1;

        while(r< haystack.size()){
            if(haystack.substr(l,needle.size())==needle) return l;
            else{
                l++;
                r++;
            }
        }
        return -1;
    }
};