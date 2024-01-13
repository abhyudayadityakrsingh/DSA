class Solution {
public:
    int minSteps(string s, string t) {
         vector <int> s1(26,0);
         vector <int> s2(26,0);


        for(char ch : s)
           s1[ch-'a']++ ;

        for(char ch : t)
          s2[ch-'a']++ ;

        int steps = 0 ;
        for(int i=0 ; i<26 ; i++){
            steps += abs(s1[i] - s2[i]) ;
        }      
        return steps/2 ;
    }
};
