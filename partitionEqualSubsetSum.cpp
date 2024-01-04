class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0 ;
        for(auto i : nums)
          sum += i ;
        int n = nums.size() ;
        if(sum % 2 == 1) return false ;
        
        else
        {  int k = sum /2 ;
            vector <bool> prev(k+1, false) ;
            prev[0] = false ;

            if(nums[0] <= k) 
              prev[nums[0]] = true ;

            for(int ind =1 ; ind < n ; ind ++ ){
                vector <bool> curr(k+1,false) ;
                curr[0] = false ;
                for(int target = 1 ; target <= k ; target ++ ){
                 bool ntake = prev[target] ;
                 bool take = false ;
                 if(nums[ind] <= target ){
                     take = prev[target - nums[ind] ] ;
                 }
                 curr[target] = take or ntake ;
                }
                prev = curr ;
            }
            return prev[k]  ;
        }
    }
};
