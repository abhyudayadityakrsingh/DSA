#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
using namespace std ;
//Sieve of Eratosthenes

int countPrimes(int n){
    vector <bool> prime(n+1 , true);
    int count = 0 ;
    prime[0]=prime[1]=false ;
     
     for(int i = 2 ; i < n ; i ++ ){
        if(prime[i]){
            count ++ ;
            for(int j = 2*i ; j < n ; j = j + i ){
                prime[j]= 0 ;
            }
        }
     }
     return count ; 

}

int main(){

    int n ;
    cout << "Enter n"<< endl ;
    cin >> n ;
/*
    int count = 0 ;

    for(int i = 2 ; i < n ; i ++ ){
        int c = 0;

        for(int j = 1 ; j <= i ; j ++){
            if(i % j == 0){
                c ++ ;
            }
            }

        if( c == 2 ){
            count ++ ;
        }

    }

    cout << count ;

*/
}