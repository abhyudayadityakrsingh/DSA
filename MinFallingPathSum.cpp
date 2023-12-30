class Solution {
public:
    int f(int i,int j, vector <vector<int>> &a , vector <vector<int>> &dp, int m){
        if( j >= m || j < 0)  return 1e9 ;//1e9-> Max Value possible
        if( i == 0) return a[i][j] ;
        if(dp[i][j] != -1) return dp[i][j] ;
        int s = a[i][j] + f(i-1,j,a,dp,m) ;
        int l = a[i][j] + f(i-1,j-1,a,dp,m) ;
        int r = a[i][j] + f(i-1,j+1,a,dp,m) ;
        return dp[i][j] = min (s,min(l,r)) ;        
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size() ;
        int n = matrix[0].size() ;
        vector <vector <int>> dp(m, vector <int>(n+1,-1)) ;
        for(int j = 0 ; j < m ; j ++ )
            dp[0][j] = matrix[0][j] ;

        for(int i = 1 ; i < n ; i ++){
            for(int j = 0 ; j < m ; j ++ ){
                
                int u = matrix[i][j] + dp[i-1][j] ;
                int l = matrix[i][j] ;
                if(j-1 > 0)
                l += dp[i-1][j-1] ;
                int r = matrix[i][j] ;
                if(j+1 < m)
                r += dp[i-1][j+1] ;

                dp[i][j] = min(u,min(l,r)) ;
            }
        }      


        //    int ans = INT_MAX ;
        // for(int i = 0 ; i < n ; i ++ ){
        //     ans = min(ans, f(n-1,i,matrix,dp,m) ) ;
        // }
        // return ans ;
        int mini = dp[n-1][0] ;4

    }
};
