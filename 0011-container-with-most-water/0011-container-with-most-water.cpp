class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lp=0,rp=n-1,ans=0;
        int w,ht,area;
        while(lp<rp)
        {
            w=rp-lp;
            ht = min(height[lp],height[rp]);
            area=w*ht;
            ans=max(ans,area);
            height[lp]<height[rp]?lp++:rp--;
        }
        return ans;
    }
};