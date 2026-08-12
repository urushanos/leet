class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows >= s.size())
            return s;

        vector<vector<char>> rows(numRows);
        int count =0;
        bool down=true;

        for(int i=0; i<s.size(); i++){
            rows[count].push_back(s[i]);

            if(down){
                count++;
                if(count==numRows){
                    count -=2;
                    down = false;
                }
            }
            else {
                count--;
                if(count == -1){
                    count +=2;
                    down = true;
                }
            }
        }

        string soln ="";
        for(int i=0; i<numRows; i++){
            for(char c: rows[i]){
            soln+= c;
            }
        }

        return soln;

    }
};