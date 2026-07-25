class Solution {
public:
    int countTotalSetBits(int n) {

        
    int totalSetBit = 0;

    for(int i = 1; i <= n; i++){

        int temp = i;
        while(temp != 0){
            if(temp & 1){
                totalSetBit++;
            }
             temp = temp >>1;
        }
    }
    return totalSetBit ;
       
    }
};
