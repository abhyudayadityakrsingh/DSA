class Solution {
public:
    int solve(int ind , int T , vector<int>& coins, vector <vector <int>> &dp){
        // Memoization
        if(ind == 0){
            if(T % coins[ind] == 0) return T/coins[ind] ;
            else return 1e9;
        }
       if(dp[ind][T] != -1) return dp[ind][T] ;
        int npick = solve(ind-1,T,coins,dp) ;
        int pick = INT_MAX ;
        if(coins[ind] <= T) pick = 1 + solve(ind,T-coins[ind],coins,dp) ;
        return dp[ind][T] = min(pick,npick) ;
    }
   int coinChange(vector<int>& coins, int amount) {
     //Tabulation Method
        int n = coins.size() ;
        vector <vector <int>> dp(n , vector <int> (amount+1,0)) ;

        for(int T = 0 ; T <= amount ; T ++){
            if(T % coins[0] == 0) dp[0][T] = T /coins[0] ;
            else dp[0][T] = 1e9 ;
        }

        for(int ind = 1 ; ind < n ; ind ++){
            for (int T =0  ; T <= amount ; T ++){
                int ntake =  0 + dp[ind-1][T] ;
                int take = 1e9 ;
                if(coins[ind] <= T) take = 1 + dp[ind][T-coins[ind]] ;
                dp[ind][T] = min(take,ntake) ;
            }
        }

        int ans =  dp[n-1][amount] ;
        if(ans >= 1e9) return -1 ;
        return ans ;


    }
};
