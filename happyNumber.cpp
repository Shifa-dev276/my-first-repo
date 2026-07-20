class Solution {
public:
    bool isHappy(int n) {

    int square = 0;
    int sum = 0;
    
    while(n != 1 && n != 4){
        
        sum = 0;
        
        while(n != 0){
            
            int digit = n % 10;
            square = digit * digit;
            sum = sum + square;
            n = n / 10;
            
        }
        
        n = sum;
    }
    
    if(n == 1){
        
       return true;
    }
    else{
        
       return false;

    }
        
 }
};
