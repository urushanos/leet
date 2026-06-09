class Solution {
public:
    bool isVowel(char n){
            return (n=='a') || (n=='e') || (n=='i') || (n=='o') || (n=='u');       
        }

    int maxVowels(string s, int k) {
       int l=0, r=k-1;
       int v=0;

       for(int i=0; i<=r; i++){
        if (isVowel(s[i])) v++;
       }
       int maxv = v;

       while(r < s.size()-1){
        if (isVowel(s[l])) v--;
        l++;
        r++;
        if (isVowel(s[r])) v++;

        if(v > maxv) maxv=v;
       }

       return maxv;
    }
};