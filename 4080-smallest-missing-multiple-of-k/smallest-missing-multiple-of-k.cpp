class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map <int, int> mp;

        for(auto i : nums){
            mp[i]=1;
        }

        int count =1;
        while(1){
            if(mp.find(k*count) == mp.end()) return k*count;
            else count++;
        }

    }
};