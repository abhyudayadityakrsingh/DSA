class Solution {
public:
    int f(int i, int j , int n , vector<vector<int>>& triangle,vector <vector <int>> dp ){
        if( i == n-1 ) return triangle[n-1][j] ;
        // memoization method
        if(dp[i][j] != -1) return dp[i][j] ;

        int d = triangle[i][j] + f(i+1,j,n,triangle,dp) ;
        int dg = triangle[i][j] + f(i+1,j+1,n,triangle,dp) ;

        return dp[i][j] = min(d,dg) ;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size() ;
        vector <vector <int>> dp(n,vector<int>(n,-1)) ;
       // return f(0,0,n,triangle,dp) ;



        //Tabulation
       for(int j = 0 ; j < n ; j ++){
           dp[n-1][j] = triangle[n-1][j] ;
       }

       for(int i = n-2 ; i >= 0 ; i -- ){
           for(int j = i ; j >= 0 ; j -- ){
                int d = triangle[i][j] + dp[i+1][j] ;
                int dg = triangle[i][j] + dp[i+1][j+1] ;
                dp[i][j] = min(d,dg) ;
            }
       }
       return dp[0][0] ;
    }
};



// Space Optimization Technique - Highly efficient

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size() ;
       vector <int> front(n) ;
        
        //compute base case -> last row
        for(int i = 0 ; i < n; i ++) {
            front[i] = triangle[n-1][i];
        }

        for(int i = n-2 ; i >= 0 ; i -- ){
           vector <int> curr(n) ;
            for(int j = i ; j>= 0 ; j-- ){
                int d = triangle[i][j] + front[j] ;
                int dg = triangle[i][j] + front[j+1] ;
                curr[j] = min(d,dg) ;

            }
            front = curr ;
        }

        return front[0] ;
    }
};
