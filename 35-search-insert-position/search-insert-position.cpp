class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low =0, high=nums.size()-1;
        int mid;
         int flag=0;

        while(low<=high){
            mid = (low+high)/2;

            if(target == nums[mid]){
               flag =1;
                break;
            }

            else if (target > nums[mid]) low=mid+1;

            else high = mid-1;
        }

       if (flag==1) return mid;
       else{
        if(target > nums[mid]) return mid+1;
        else return mid; 
       }
    }
};