class Solution {
public:
    int twosComplement(int num) {
       
       int one_sComp = ~(num);
       int two_sComp = one_sComp + 1;

       return two_sComp;

    }
};
