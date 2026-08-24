class Solution {
public:
    string reverseWords(string s) {
        stack<char> st;
        string soln;

        for(int i= s.size()-1; i>=0; i--){
            if(s[i]==' '){
                while(!st.empty()){
                    soln += st.top();
                    st.pop();
                }
                if(!soln.empty() && soln.back()!=' '){
                    soln += ' ';
                }
            }
            else st.push(s[i]);
        }
        
        while(!st.empty()){
            soln += st.top();
            st.pop();
        }
        if(!soln.empty() && soln.back() == ' ') soln.pop_back();

        return soln;
    }
};