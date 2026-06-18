class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> indices;
        int l=0, r=numbers.size()-1;

        while(r>l){
            if(numbers[l]+numbers[r] == target){
                indices.push_back(l+1);
                indices.push_back(r+1);
                break;
            }
            else if(numbers[l]+numbers[r] > target){
                    r--;
            }
            else{
                l++;
            }
        }
        return indices;
    }
};