class Solution {
public:
    
    bool checkDivisibility(int n) {
        int pro=1;
        int sum=0;
        int num=n;
        while(num>0){
        
            sum+=num%10;
            pro*=num%10;
            num/=10;
        }
        if(n%(sum+pro)==0 ){
            return true;
        }else{
             return false;
        }
        return false;
    }
};