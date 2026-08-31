#include <iostream>
using namespace std;

int main(){
    
    int arr[6] = {10,15,20,33,54,12};
    
    int countPositive = 0;
    int countNegative = 0;
    
    for(int i = 0; i < 6; i++){
        
        int number = arr[i];
        
        if(number > 0){
            
            countPositive++;
        }
        else if(number < 0){
            
            countNegative++;
        }
        else if(number == 0){
           
           cout <<"Number is Zero"<<endl;
       }
       
    }
    
   cout <<"Total number of positive element : "<<countPositive<<endl;
   cout <<"Total number of negaitive element : "<<countNegative<<endl;
   
    return 0;
    
} 
