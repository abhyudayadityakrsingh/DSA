class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> res ;
        int n = numbers.size() ;
        int i = 0 , j = n-1 ;
        while( numbers[i] + numbers[j] != target){
            if(numbers[i] + numbers[j] < target ){
                       i ++ ;
            }
            else{
                      j -- ;
            }
            
        }
        return {i+1,j+1} ;
    }
};
