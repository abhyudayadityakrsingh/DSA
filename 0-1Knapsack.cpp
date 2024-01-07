#include <bits/stdc++.h> 
int recursion(int ind , int capacity , vector<int> weight, vector<int> value){
  // Recursive Solution
	if(ind == 0 ) {
		if(weight[0] <= capacity) return value[0] ;
		else return 0 ;
	}

	int notPick = 0 + solve(ind-1,capacity,weight,value) ;
	int pick = INT_MIN ;

	if(weight[ind] <= capacity) pick= value[ind]+solve(ind-1,capacity-weight[ind],weight,value) ;
	return max(pick,notPick) ;

}
int solve(int ind , int capacity , vector<int> weight, vector<int> value,vector <vector <int>> &dp){
  //Memoization approach
	if(ind == 0 ) {
		if(weight[0] <= capacity) return value[0] ;
		else return 0 ;
	}
	if(dp[ind][capacity] != -1) return dp[ind][capacity] ;



	int notPick = 0 + solve(ind-1,capacity,weight,value,dp) ;
	int pick = INT_MIN ;

	if(weight[ind] <= capacity) pick= value[ind]+solve(ind-1,capacity-weight[ind],weight,value,dp) ;
	return dp[ind][capacity] = max(pick,notPick) ;

}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	vector <vector <int>> dp(n, vector<int>(maxWeight+1,-1)) ;
	return solve(n-1,maxWeight,weight,value,dp) ;
}
