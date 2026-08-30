class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minIndex=0, maxIndex=0;

        for(int i=1; i<n; i++){
            if(nums[i] < nums[minIndex]){
                minIndex = i;
            }

            if(nums[i]>nums[maxIndex]){
                maxIndex = i;
            }
        }

        int left = min(minIndex, maxIndex);
        int right = max(minIndex, maxIndex);

        int front = right+1;
        int back = n-left;
        int mix = (left+1)+(n-right);

        return min({front, back, mix});
    }
};