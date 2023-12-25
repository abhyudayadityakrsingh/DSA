#include <bits/stdc++.h> 
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int prev2 = 0 ;
    int prev = nums[0] ;

    for(int i =1 ; i < nums.size() ; i ++) {
        int take = nums[i] ;
        if(i>1) take += prev2 ;
        int ntake = prev ;

        int curr = max(take,ntake) ;
        prev2 = prev ;
        prev = curr ;
    }
    return prev ;
}
