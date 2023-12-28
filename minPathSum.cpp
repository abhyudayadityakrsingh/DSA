class Solution {
public:
    int solve(int i , int j , vector<vector<int>>& grid,vector <vector<int>> &dp){
        if(i == 0 && j == 0) return grid[i][j] ;
        if(i < 0 || j < 0) return 1e9 ;

        if(dp[i][j] != -1) return dp[i][j] ;

        int left = grid[i][j] + solve(i,j-1,grid,dp) ;
        int up = grid[i][j] + solve(i-1,j,grid,dp) ;
        return dp[i][j] =  min(left,up) ;
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size() ;
        int n = grid[0].size() ;
        vector <vector <int>> dp(m, vector <int>(n,-1)) ;
        return solve(m-1,n-1,grid,dp) ;
        // int dp[m][n] ;
        // for(int i = 0 ;i < m ; i ++){
        //     for(int j = 0 ; j < n; j ++){
        //         int up = INT_MAX , left = INT_MAX ;
        //         if(i == 0 && j == 0) dp[i][j] = grid[0][0] ;
        //         else {
        //             up = grid[i][j] ;
        //             left = grid[i][j] ;
        //             if(i > 0 )
        //                up += dp[i-1][j] ;
        //             if( j > 0) 
        //               left += dp[i][j-1] ;   
        //         }
        //         dp[i][j] = min(up,left) ;
        //     }
        // }
        // return dp[m-1][n-1] ;
    }
};
