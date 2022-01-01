class Solution {
public:
    
    

  double REF( double x, int n){
         if (n==0)
        return 1;
        double PrePower=REF(x,n/2) ;
        if(n%2==0){
            return PrePower*PrePower;
            }
        else{
            return PrePower*PrePower*x;
        } 
    }
    
    
    
    double myPow(double x, int n) {
        double ans=REF(x, abs(n));
        
        if (n<=0){
            return 1.0/ans;
        }
        else {
            return ans;
        }
       

        
    }
};