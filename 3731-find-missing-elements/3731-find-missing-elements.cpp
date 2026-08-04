class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=nums[0];i<=nums[nums.size()-1];i++){
            int cnt=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==i)
                {
                    cnt++;
                }
            }
            if(cnt==0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};