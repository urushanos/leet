class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;

        int left=1, right=x;
        long long mid;
        
        while(left <=right){
            mid = left+(right-left)/2;

            if(mid*mid == x) return mid;

            else if(mid*mid > x){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return right;
    }
};