class Solution {
public:
     bool isPalindrome(int x) {

       // Leetcode 9. Palindrome Number

      long long int number = x;
      long long int answer = 0;

        
            if(x < 0){
                return false;
            }

        while(x != 0){
          
            int digit = x % 10;
            answer = answer * 10 + digit;
            x = x / 10;


        }

        if(number == answer){

            return true ;
        }
        else{

            return false;

        }
        
    }
};
