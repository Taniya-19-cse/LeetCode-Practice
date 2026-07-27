class Solution {
public:
    int maxProduct(int n) {
        vector<int> nums;
        while(n>0)
        {
            int rem=n%10;
            nums.push_back(rem);
            n/=10;
        }
        sort(nums.begin(),nums.end());
        int m=nums.size()-1;
        return (nums[m]*nums[m-1]);
    }
};