class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0 ;
        while(n!=0){
            if(n&1){//If last bit is 1 produces true else false
                count++ ;//If last bit is 1 then count is incremented
            }
           n= n>>1;//right shift n to check the next bit.
        }
        return count ;
    }
};