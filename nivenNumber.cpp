#include <iostream>
using namespace std;

int main() {

    // Harshad Number is also called as a Niven number
   
   int n;
   cout << "enter value of n:";
   cin >> n;
   
   int sum = 0;
   int number = n;
   
   while(n != 0){
       int digit = n % 10;
       sum = sum + digit;
       n = n / 10;
    }
    
    if(number % sum == 0){
        cout << "Yes, it is a Harshad Number" << endl;
    }
    else{
        cout << "No, it is not a Harshad Number" << endl;
    }
   
  return 0;
  
}
