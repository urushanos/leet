class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0, prod=1, temp = n;

        while(temp>0){
            sum += temp%10;
            prod *= temp%10;

            temp = temp/10;
        }

        if(n%(sum+prod) == 0) return true;
        else return false;
    }
};