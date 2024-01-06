int f(int ind , int k ,  vector<int> &arr ,vector <vector <int>> &dp){
      if(k == 0) return 1 ;
	  if(ind == 0)  return arr[ind] == k ;
     if(dp[ind][k] != -1 ) return dp[ind][k] ;

	  int nPick = f(ind-1,k,arr,dp) ;
	  int pick = 0 ;
	  if(arr[ind] <= k){
		  pick = f(ind-1,k-arr[ind],arr,dp);
	  }
	  return dp[ind][k] = pick + nPick ;
}

int findWays(vector<int>& arr, int k)
{
	// Write your code here.
	int n = arr.size() ;
	vector <vector <int>> dp(n , vector<int>(k+1,0)) ;
	//return f(n-1,k,arr,dp) ;
	for(int i =0 ; i < n; i++ ) dp[i][0] = 1 ;
	if(arr[0] <= k) dp[0][arr[0]] = 1 ;

	for(int i =1 ; i < n; i ++ ){
         for(int sum = 0; sum <= k ; sum ++){
			 int ntake = dp[i-1][sum] ;
			 int take = 0 ;
			 if(arr[i] <= sum) take = dp[i-1][sum-arr[i]] ;
			 dp[i][sum] = take + ntake ;
		 }
	}

	return dp[n-1][k] ;
}
