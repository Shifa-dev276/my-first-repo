class Solution {
public:
    int addDigits(int num) {

    int sum = 0;
    int answer = 0;

    if(num == 0){
        return 0;
    }
        
        while(num != 0){

            int digit = num % 10;
            sum = sum + digit;
            num = num / 10;

        }
        
          while( sum > 9){

            answer = 0;
            
            while( sum != 0){

                 int digit1 = sum % 10;
                 answer = answer + digit1;
                 sum = sum / 10;

            }
                sum = answer;
                
            }

        
        return sum;

    }
};
