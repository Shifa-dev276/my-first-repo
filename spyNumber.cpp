#include <iostream>
using namespace std;

int main() {
   
   int n;
   cout<<"enter value of n:";
   cin>>n;
   
   int sum = 0;
   int product = 1;
   int number = n;
   
   while(n != 0){
       int digit = n % 10;
       sum = sum + digit;
       n = n / 10;
   }
   
   while(number != 0){
       int digit = number % 10;
       product = product * digit;
       number = number / 10;
   }
   
   if(sum == product){
       cout<<"Yes, it is a spy number"<<endl;
   }
   else{
       cout<<"No, it is not a spy number"<<endl;
   }
   
 return 0;
  
}
