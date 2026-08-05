class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int n = nums.size();
        //arr[i]!=val -> valid, then valid++
        // if arr[i] == val (not valid) then next pointer finds next valid num and swaps


        for(int i=0; i<n; i++){
            if(nums[i]!=val){
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};