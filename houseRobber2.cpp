class Solution {
public:
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
    int rob(vector<int>& nums) {

        vector <int> temp1 ;
        vector <int> temp2 ;
    
    
    int n = nums.size() ;
    //edge case
    if(n == 1) return nums[0] ;

    for(int i = 0; i < n ; i ++ ){
        if(i != 0) temp1.push_back(nums[i]);
        if(i != n-1) temp2.push_back(nums[i]) ;
    }

    return max(maximumNonAdjacentSum(temp1) , maximumNonAdjacentSum(temp2) ) ;
        
    }
};
