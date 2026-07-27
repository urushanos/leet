class Solution {
public:
    int maxProduct(int n) {
       int i=0, j=0;

       for(int k=0; k<n; n/=10){
        int d = n%10;
        if(d>=i){
            j = i;
            i = d;
        }
        else if(d>j){
            j=d;
        }
       }
       return i*j;
    }
};