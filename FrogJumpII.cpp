class Solution {
public:
   
    int maxJump(vector<int>& stones) {
        int n = stones.size() ;
        vector <int> dp(n+1,-1) ;
        dp[0] = 0 ;
        dp[1] =stones[1] ;
       
        for(int i =2 ; i < n ; i++){
          dp[i] = max(dp[i-1] ,stones[i] - stones[i-2]) ;
          
        }
        return dp[n-1] ;
    }
};
