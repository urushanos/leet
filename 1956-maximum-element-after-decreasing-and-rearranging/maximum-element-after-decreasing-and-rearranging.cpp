class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int maximum =1;
        arr[0]=1;

        for(int i=1; i<arr.size(); i++){
            arr[i] = min(arr[i], arr[i-1]+1);
            maximum = max(arr[i], maximum);
        }
        return maximum;
    }
};