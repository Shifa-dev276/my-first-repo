#include <iostream>
using namespace std;

int main(){
    
    int arr[10] = {11, 33, 45, 2, 3, 89, 34, 10, 9, 56};
    int size = 10;
    
    int start = 0;
    int end = size-1;
    int temp = 0;
    
    while(start < end){
        
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
        
    }
    
    cout << "printing the array : ";
    
    for(int i = 0; i < size; i++){
        
        cout << arr[i] <<" ";
    }
    
    return 0;
}
