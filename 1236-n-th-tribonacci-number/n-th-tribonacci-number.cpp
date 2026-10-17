class Solution {
public:
    int tribonacci(int n) {
        
        if(n<=2){
            if(n==0) return 0;
            else if (n<=2) return 1;
        }

        vector<int> dp(n+1, -1);
        dp[0] =0;
        dp[1] =1;
        dp[2] =1;

        for(int i=3; i<=n; i++){
            int temp = i-3;
            dp[i] = dp[temp] + dp[temp+1] + dp[temp+2];
        }

        return dp[n];

    }
};