class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0, maxsum;
        int l=0, r=k-1;

        for(int i=0; i<=r; i++){
            sum+=nums[i];
        }
        maxsum=sum;

        while(r < nums.size()-1){
            sum -=nums[l];
            l++;
            r++;
            sum += nums[r];

            if (sum>maxsum) maxsum=sum;
        }

        return maxsum/k;
    }
};