class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        int missing =-1;
        unordered_map<int, int> freq; //num, freq

        for(auto& x : nums) freq[x]++;

        //largest with freq =1, just count for each sub?    
        for(int i=0; i<nums.size(); i++){
            if( k== nums.size()) missing = max(missing, nums[i]); //window is array size

            else if(freq[nums[i]] ==1){ //only checking unique elements
                if(k==1) missing = max(missing, nums[i]); //window size is 1

                else if(i==0 || i==nums.size()-1) missing = max(missing, nums[i]);
            }
        }
        return missing;

    }
};