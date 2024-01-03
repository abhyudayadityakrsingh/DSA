class Solution {
public:
    int calculate(string s) {
        int count = 0 ;
        for(int i =0 ; i < s.size() ; i ++ ){
            if(s[i] == '1') count ++ ;
        }
        return count ;
    }
    int numberOfBeams(vector<string>& bank) {
        int total = 0 , prev = 0 ;

        for(int i = 0 ; i < bank.size() ; i ++ ){
            string row = bank[i] ;
            int curr = calculate(row) ;
            if(curr == 0) continue ;
            total += curr*prev ;
            prev = curr ;
        }
        return total ;
    }
};
