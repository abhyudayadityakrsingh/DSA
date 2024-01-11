#include <string>
int lcs(string &str1, string &str2){
    // Write your code here.
    int n = str1.size() ;
    int m = str2.size() ;
     vector <int> prev(m+1,0) , curr(m+1,0) ;
   
        int ans = INT_MIN;
    for(int i = 1; i <= n; i++){
        for(int j=1; j<=m ; j++){
            if(str1[i-1] == str2[j-1])
           curr[j] = 1+ prev[j-1] ;
            
            else
           curr[j]= 0;

            ans =max(ans,curr[j]);
        }
        prev=curr;
    }
    return ans ;
   

}
