class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVol = 0,vol;
        int l=0, r=height.size()-1;
        
        while(r>l){
            vol = (r-l)* min(height[l],height[r]);
            if(vol > maxVol) maxVol = vol;

            if(height[l] >height[r]) r--;
            else l++;
        }
        return maxVol;
    }
};