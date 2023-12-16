#include <iostream>
#include <array>
#include <vector>
using namespace std ;
//Leetcode ques - 2595
vector<int> EvenOdd(int n){

    int odd = 0 ;
    int even = 0 ;
    int count = 1 ;

    while(n!=0){
        int bit  = n&1 ;
        n = n >>1;
        count ++ ;
        if(bit == 1){
            if(count%2 == 0)
            even++ ;
            else
            odd ++ ;
        }
    }

    return {even,odd} ;

}


int main(){
    int n ; 
    cout << "Enter n :" << endl ;
    cin >> n ;
    vector <int> ans = EvenOdd(n) ;
    for(int i = 0 ;  i < 2 ; i ++ ){
        cout << ans[i] << " " ;
    }

}
