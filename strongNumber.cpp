#include <iostream>
using namespace std;

int main(){
    
    //number is also known as krishnamurty number
    
    int n;
    cout << "enter value of n:";
    cin >> n;
    
    int fact = 1;
    int sum = 0;
    int original = n;
    
    while(n != 0){
        
        int digit = n % 10;

        int i = digit;
        fact = 1;
        while(i > 0){

            fact = fact * i;
            i--;

        }
           
        sum = sum + fact;
        n = n / 10;
          
           
    }

    if(original == sum){
        cout<<"Yes, it is a strong number"<<endl;
    }
    else{
        cout<<"No,  it is not a strong number"<<endl;
    }
    
    return 0;
}
