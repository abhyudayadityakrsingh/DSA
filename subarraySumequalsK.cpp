#include <bits/stdc++.h> 
bool f(int i , int k , vector<int> &arr,vector <vector <int>> &dp){
    if(k == 0) return true ;//base case 1 
    if(i == 0) return (arr[i] == k) ;// base case 2
    if(dp[i][k] != -1) return dp[i][k] ;

    bool ntake = f(i-1,k,arr,dp) ;
    bool take = false ;
    if(arr[i] <= k) 
      take = f(i-1,k-arr[i],arr,dp) ;

    return dp[i][k] = take or ntake ;   
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector <vector <bool>> dp(n , vector <bool>(k+1,false)) ;
    //return f(n-1,k,arr,dp) ;

    //base case : true for every single element - base case 1
    for(int i = 0 ; i < n ; i ++ )
       dp[i][0] = true ;
    
       //base case 2 - 
    dp[0][arr[0]] = true ;

 for (int ind = 1; ind < n; ind++) {
        for (int target = 1; target <= k; target++) {
            // If we don't take the current element, the result is the same as the previous row
            bool notTaken = dp[ind - 1][target];

            // If we take the current element, subtract its value from the target and check the previous row
            bool taken = false;
            if (arr[ind] <= target) {
                taken = dp[ind - 1][target - arr[ind]];
            }

            // Store the result in the DP array for the current subproblem
            dp[ind][target] = notTaken || taken;
        }
    }

    // The final result is stored in dp[n-1][k]
    return dp[n - 1][k];
    
}
