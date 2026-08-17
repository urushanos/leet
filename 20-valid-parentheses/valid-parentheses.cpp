class Solution {
public:
    bool isValid(string s) {
        stack <char> brackets;

        for(char b : s){
            if(b == '(' || b == '{' || b == '['){
                brackets.push(b);
            }
            
            else{
                if(brackets.empty()) return false;

                else if( b==')' && brackets.top() != '(') return false;
                else if ( b=='}' && brackets.top() != '{' ) return false;
                else if ( b==']' && brackets.top() != '[') return false;

                brackets.pop();
            }
        }

        return brackets.empty();
    }
};