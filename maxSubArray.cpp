#include <iostream>
#include <vector>
#include <array>
using namespace std ;
//Leetcode ques -53

int maxSubArray(vector <int> nums){
    int arr[2] ;
    int res = nums[0] ;
    int maxEnding = nums[0] ;
    
    for(int i = 1 ; i < nums.size() ; i ++ ){
        maxEnding = max(maxEnding + nums[i] , nums[i]);
        res = max(res, maxEnding) ;

    }

    return res ;
}