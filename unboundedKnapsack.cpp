int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
    // Write Your Code Here.
    vector <int> prev(w+1,0) ;
    for(int W=0 ; W<=w ; W ++)
      prev[W] = ((int)(W/weight[0]))*profit[0];

    for(int ind=1; ind<n ; ind++){
        for(int W =0 ; W<=w ;W++){
            int notTake = prev[W] ;

            int take = 0 ;
            if(weight[ind] <= W) take = profit[ind] + prev[W-weight[ind]] ;
            
            prev[W] = max(notTake,take) ;

        }
    }

    return prev[w] ;  
}
