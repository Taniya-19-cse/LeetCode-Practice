class Solution {
public:
    int reverse(int x) {
        int num;
    int rev=0;

 while(x!=0)
 {
    num=x%10;
    x=x/10;
    if(rev > INT_MAX/10 ||(rev == INT_MAX/10 && num>7) ) 
      return 0;
    if(rev < INT_MIN/10 ||(rev == INT_MIN/10 && num<-8) ) 
      return 0;  
     rev = rev*10 + num;
 }
  return rev;

    }
};