class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int l=0, r=0;
        int a=0, b=0, c=0;
        int count=0;

        while(r < n){
            if(s[r] == 'a') a++;
            else if(s[r] == 'b') b++;
            else c++;

            while (a>0 && b>0 && c>0){

                count += n-r;

                if(s[l] == 'a') a--;
                else if(s[l] == 'b') b--;
                else c--;
                
                l++;
            }

            r++;
        }
        return count;
    }
};