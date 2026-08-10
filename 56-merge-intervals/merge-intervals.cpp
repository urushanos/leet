class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> soln;

        sort(intervals.begin(), intervals.end());
        soln.push_back(intervals[0]);

        for(int i=1; i<intervals.size(); i++){
            if(intervals[i][0]<= soln.back()[1]){
                int end = max(soln.back()[1], intervals[i][1]);
                soln.back()[1] = end;
            }
            else{
                soln.push_back(intervals[i]);
            }
        }

        return soln;
    }
};