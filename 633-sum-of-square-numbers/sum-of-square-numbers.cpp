class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a=0, b= (long long)sqrt(c);
        long long sum;

        if (c==2) return true;
        while(b>=a){
           sum = a*a + b*b; 
            if(sum == c) return true;
            else if(sum < c) a++;
            else b--;
        }
        return false;
    }
};