#include <iostream>
using namespace std;

int main() {
   
   int n;
   cout<<"enter value of n:";
   cin>>n;
   
   int sum = 0;
   int number = n;
   
   for(int i = 1; i < n; i++){
       if(n % i == 0){
           sum = sum + i;
       }
   }
   
   if(sum == number){
       cout<<"Yes, it is a Perfect Number"<<endl;
   }
   else{
       cout<<"No, it is not a Perfect Number"<<endl;
   }
   
 return 0;
  
}
