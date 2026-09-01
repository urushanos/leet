
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> soln(2);
        unordered_map <int, int> hash1, hash2;

        for(int i : nums1){
            hash1[i]++;
        }

        for(int i : nums2){
            hash2[i]++;
        }

        for(auto x : hash1){
            if(hash2.find(x.first) == hash2.end()){
                soln[0].push_back(x.first);
            }
        }

        for(auto x : hash2){
            if(hash1.find(x.first) == hash1.end()){
                soln[1].push_back(x.first);
            }
        }

        return soln;

    }
};