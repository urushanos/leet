class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        //int n=nums.size();
        //int min=0, max=0, count;
        //int point;
        vector<int> ans;

        for(int num: nums){
            if(num<pivot) ans.push_back(num);
        }
        for(int num: nums){
            if(num==pivot) ans.push_back(num);
        }
        for(int num: nums){
            if(num>pivot) ans.push_back(num);
        }

        return ans;


    }
};