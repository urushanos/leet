class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int soln=0;

        unordered_map <char, int> rel ={
            {'I' , 1},
            {'V' , 5},
            {'X' , 10},
            {'L' , 50},
            {'C' , 100},
            {'D' , 500},
            {'M' , 1000}
        };

        for(int i=0; i<n-1; i++){
            if(rel[s[i]] < rel[s[i+1]]){
                soln-=rel[s[i]];
            }else{
                soln += rel[s[i]];
            }
        }
        soln += rel[s[n-1]];
        return soln;
    }
};