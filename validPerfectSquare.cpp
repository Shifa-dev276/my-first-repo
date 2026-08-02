#include <iostream>
using namespace std;

int main(){

   int n;
   cout << "enter value of n:";
   cin >> n;

   bool isSquare = false;

   for(int i = 1; i*i <= n; i++){

      int num = i * i;

      if(num == n){

        cout << "True" <<endl;
        isSquare = true;
        break;
        
      }

   }

   if(isSquare == false){
    cout << "False" << endl;
   }

}
