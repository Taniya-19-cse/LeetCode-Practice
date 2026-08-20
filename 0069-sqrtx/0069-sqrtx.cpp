class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        long long low=1;
        long long high=x;
        long ans=1;
        while(low<=high){
            long mid=(low+high)/2;
            if((mid*mid) <=x){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};