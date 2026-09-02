class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return false;

        vector<int> freq1(26, 0), freq2(26,0);
        unordered_set <char> set1, set2;

        for(int i =0; i<word1.size(); i++){
            set1.insert(word1[i]);
            set2.insert(word2[i]);

            freq1[word1[i]-'a']++;
            freq2[word2[i]-'a']++;
        }

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return set1==set2 && freq1 == freq2;
    
          
    }
};