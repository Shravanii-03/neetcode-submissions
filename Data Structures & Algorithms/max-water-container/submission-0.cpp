class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int maxcapacity=0;

        while(l<r){
            int height=min(heights[l], heights[r]);
            int width=(r-l);
            int water=height* width;
            
            maxcapacity=max(water, maxcapacity);
            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxcapacity;
    }
};
