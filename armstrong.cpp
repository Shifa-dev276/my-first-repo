
#include <iostream>
#include<cmath>
using namespace std;

int main() {

    int n;
    cout<<"enter value of n:";
    cin>>n;
    
    int totalCount = 0;
    int num = n;
    int answer = n;
    int sum = 0;
    
    while( n != 0 ){
        int digit = n % 10;
       
        
        totalCount++;
        n = n / 10;
    }
    
    while( num != 0 ){
        int digit = num % 10;
        sum = sum + round( pow( digit, totalCount ));
        num = num / 10;
        
        
    }    
    if( sum == answer ){
      
        cout<<"An armstrong Number";
    }
      
    else{
      
        cout<<"Not an armstrong Number";
    }

    return 0;
}
