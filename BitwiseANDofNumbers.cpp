class Solution {

    // Leetcode question 201
public:
    int rangeBitwiseAnd(int left, int right) {

        if(right > INT_MAX){
            return 0 ;
        }
           //Bitwise-AND of any two numbers will always produce a number less than or equal to the smaller number.  
         while (right > left){
             right = right & right-1 ;
         }

         return left & right ;
    }
};