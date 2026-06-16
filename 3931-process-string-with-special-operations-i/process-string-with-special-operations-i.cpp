class Solution {
public:
    string processStr(string s) {
        string result="";

        for (int i=0; i<s.size(); i++){
            if((s[i] == '*'||s[i] == '#'||s[i] == '%') && result == "") continue;

            if(s[i] == '*'){
                result.pop_back();
            }
            else if(s[i]=='#'){
                result.append(result);
            }
            else if(s[i]=='%'){
                reverse(result.begin(), result.end());
            }
            else{
                result.push_back(s[i]);
            }
        }

        return result;
    }
};