class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n*2);
        for(int i=0;i<n;i++)
        {
            ans[i]=nums[i];
            ans[n+i]=nums[n-i-1];
        }
        return ans;
    }
};