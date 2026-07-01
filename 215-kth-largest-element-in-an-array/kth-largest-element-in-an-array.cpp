class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());

        for(int i=k; i>1; i--){
            nums.pop_back();
        }

        return nums.back();
    }
};