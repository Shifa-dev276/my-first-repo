bool isPrime(int n) {
 
    bool isPrime = 1;

       if(n == 1){
          return false;
       }
    

   for(int i = 2; i < n; i++){

       if(n % i == 0){
       
         isPrime = 0;
         break;
        }
    }

       if(isPrime == 1){
          return true;
       }
       else{
         return false;
       }
}
