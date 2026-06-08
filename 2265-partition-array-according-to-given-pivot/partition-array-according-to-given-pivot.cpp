class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        //int n=nums.size();
        //int min=0, max=0, count;
        //int point;
        vector<int> ans, maxArr,mid;

        for(int i=0; i<nums.size(); i++){
            if (nums[i]<pivot){
                ans.push_back(nums[i]);
            }
            else if(nums[i] == pivot){
                mid.push_back(nums[i]);
            }
            else{
                maxArr.push_back(nums[i]);
            }
        }

        ans.insert(ans.end(), mid.begin(), mid.end());
        ans.insert(ans.end(), maxArr.begin(), maxArr.end());

        return ans;


    }
};