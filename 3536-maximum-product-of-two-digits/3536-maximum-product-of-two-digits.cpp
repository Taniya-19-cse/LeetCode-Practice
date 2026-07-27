class Solution {
public:
    int maxProduct(int n) {
        // vector<int> nums;
        // while(n>0)
        // {
        //     int rem=n%10;
        //     nums.push_back(rem);
        //     n/=10;
        // }
        // sort(nums.begin(),nums.end());
        // int m=nums.size()-1;
        // return (nums[m]*nums[m-1]);
        int first=0,second=0;
        while(n>0)
        {
            int rem=n%10;
            if(rem>first)
            {
                second=first;
                first=rem;

            }else if(rem>second)
            {
                second=rem;
            }
            n/=10;
        }
        return first*second;
    }
};