class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string final ="";
        int n = word1.size() + word2.size();

        int w1=0, w2=0;

        while(w1+w2 < n){
            final += word1[w1];
            final += word2[w2];
            
            while(w1 == word1.size()-1 && w2<word2.size()-1){
                w2++;
                final += word2[w2];
            }
            while(w2 == word2.size()-1 && w1<word1.size()-1){
                w1++;
                final += word1[w1];
            }
            w1++;
            w2++;
        }

        return final;
    }
};