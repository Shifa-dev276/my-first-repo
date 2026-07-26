#include <iostream>
using namespace std;

int main() {
  
  int n;
  cout<<"enter value of n:";
  cin>>n;
  
  int original = n;
  int sum = 0;
  
  int number = n*n;
  
  while(number != 0){

      int digit = number % 10;
      sum = sum + digit;
      number = number / 10;

  }
 
 if(original == sum){
   
     cout<<"Yes, it is a Neon Number"<<endl;
  }
 else{
   
     cout<<"No, it is not a Neon Number"<<endl;
 }
  
    return 0;
}
