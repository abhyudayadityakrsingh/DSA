#include <bits/stdc++.h>
int f(int i , int j , int* arr,vector<vector<int>>&dp){
    if(i == j ) return  0 ;
    if(dp[i][j] != -1) return dp[i][j] ;
    int mini = 1e9 ;
    for(int k=i ; k<j; k++){
         int steps= arr[i-1] * arr[k] * arr[j] + f(i,k,arr,dp) + f(k+1,j,arr,dp) ;
         if(steps < mini) 
            mini = steps;
    }
    return dp[i][j] = mini ;
}
int matrixChainMultiplication(int* arr, int n) {
    // Write your code here
    vector <vector <int>> dp(n , vector<int>(n,0));
    for(int i=0; i<n;i++) dp[i][i] =0 ;

    for(int i=n-1;i>=0;i--){
        for(int j=i+1;j<n;j++){
            int mini = 1e9 ;
            for(int k=i ; k<j; k++){
                int steps = arr[i-1]*arr[k]*arr[j] + dp[i][k] + dp[k+1][j] ;
                if(steps <mini) mini = steps;
            }
            dp[i][j] = mini;
        }
    }
    return dp[1][n-1] ;
}
