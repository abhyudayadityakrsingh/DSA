class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0 ;

       int min = prices[0] ;
       int current = 0 ;

       for(int i = 0 ; i < prices.size() ; i ++ )
          {
           if(prices[i] < min)
            min = prices[i] ;

            current  = prices[i] - min ;

            if(current > profit){
                profit = current ;
            }

            
       }

        return profit ;
        
    }
};
