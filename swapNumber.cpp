#include <iostream>
using namespace std;

int main(){

    int a, b;
    cout <<"enter value of a b:";
    cin >> a >> b;

    cout<<"before a: "<< a <<" "<<"b: "<< b <<endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"after: "<< a <<" "<<"b: "<< b <<endl;
    
    return 0;
}
