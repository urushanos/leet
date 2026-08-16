class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> hash;
        vector<int> soln;

        for(int t=0; t<nums.size(); t++){
            int complement = target - nums[t];

            if(hash.find(complement) != hash.end()){
                soln.push_back(hash[complement]);
                soln.push_back(t);
                break;
            }
            else{
                hash[nums[t]] = t;
            }
        }

        return soln;

    }
};