class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector <vector <int>> ans ;

        for(int i = 1 ; i <= numRows ; i ++ ){//running a loop from 1 till 5 , as we need to get hold of i+1  value  in every iteration 
            int number = 1 ;//Create a number to calculate all the values
            vector<int> temp ;
            for(int j = 1 ; j <= i ; j ++ ){
               temp.push_back(number) ;

                number = number*(i-j)/(j) ;// this is used to calculate the number that is to be inserted

            }
              ans.push_back(temp) ; // push the temp 1d vector to the 2d answer vector
        }
        return ans ;
        
    }
};
