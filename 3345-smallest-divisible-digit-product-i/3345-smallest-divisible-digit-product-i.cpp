class Solution {
public:
    int findProduct(int n){
        int pro=1;
        while(n>0){
                pro*=n%10;
                n/=10;
        }
        return pro;
    }
    int smallestNumber(int n, int t) {
        int product=findProduct(n);
        if(product%t==0){
            return n;
        }else{
          while(product%t!=0)
        {
                n++;
              product=findProduct(n);
        }
        }
       return n;
    }
};