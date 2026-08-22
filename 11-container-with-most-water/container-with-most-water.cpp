class Solution {
public:
    int maxArea(vector<int>& height) {
        int vol, maxVol =0;
        int r=height.size()-1, l=0;

        while(l<=r){
            vol = min(height[l], height[r])* (r-l);
            maxVol = max(maxVol, vol);
            
            if(height[l]>height[r]) r--;
            else l++;
        }
        return maxVol;
    }
};