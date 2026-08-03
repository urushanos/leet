// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long low =1, high = n, mid;
        int firstBad = n;

        while(low <= high){
            mid =(low+high)/2;
            if(!isBadVersion(mid)) low = mid+1;

            else{
                if(mid < firstBad) firstBad =mid;
                high = mid-1;
            }
        }

        return firstBad;
    }
};