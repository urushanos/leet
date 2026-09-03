class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minEve=INT_MAX, minOdd=INT_MAX;
        //first even smaller than first odd
        //NOT FIRST, MINIMUM!!

        for(int i=0; i<nums1.size(); i++){
            if(nums1[i]%2!=0 && nums1[i]<minOdd) minOdd = nums1[i];
            if(nums1[i]%2 ==0 && nums1[i]<minEve) minEve = nums1[i];
        }   

        if(minEve==INT_MAX || minOdd==INT_MAX) return true;

        if(minEve < minOdd) return false;
        else return true;
    }
};