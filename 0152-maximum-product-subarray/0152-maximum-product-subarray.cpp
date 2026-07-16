class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            int pro=1;
            for(int j=i;j<nums.size();j++)
            {
            
                pro*=nums[j];
                ans=max(ans,pro);
            }
         
        }
        return ans;
    }
};