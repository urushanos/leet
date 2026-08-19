class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> soln;
        vector<int> temp;
        unordered_map<int, int> freq;

        for(int num : nums){
            freq[num]++;
        }

        priority_queue<pair <int,int>> pq;
        for(auto it: freq){
            pq.push({it.second, it.first});
        }

        while(k>0){
            soln.push_back(pq.top().second);
            pq.pop();
            k--;
        }

        /*for(auto& [key, value] :freq){
            temp.push_back(value);
        }
        sort(temp.begin(), temp.end());

        for(int i=n-1; i<k; i++){

        } */
        
        return soln;

    }
};