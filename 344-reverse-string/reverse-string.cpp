class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0, r=s.size()-1;

        while(r>l){
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
};