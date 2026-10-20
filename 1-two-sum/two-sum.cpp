class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> freq;
        vector<int> soln;

        for(int i=0; i<nums.size(); i++){
            if(freq.find(target-nums[i]) != freq.end()){
                soln.push_back(i);
                soln.push_back(freq[target-nums[i]]);
                return soln;
            }
            else freq[nums[i]] = i;
        }
        return soln;
    }
};