#include <iostream>
#include <math.h>
using namespace std ;

//Leetcode Question -2595
/*You are given a positive integer n.

Let even denote the number of even indices in the binary representation of n (0-indexed) with value 1.

Let odd denote the number of odd indices in the binary representation of n (0-indexed) with value 1.

Return an integer array answer where answer = [even, odd].
*/
int main (){
    int n ;
    cout<<"Enter n"<<endl ;
    cin>>n;
    
     
     int mask = 0 ;
     int temp = n ;
     int i=0 ;
     while(temp!=0){
        mask = (mask << 1) | 1 ;
        temp = temp >> 1 ;

     }
     int arr [mask] ;
     while (n != 0)
     {
        arr[i]= n & 1 ;
        i++ ;
        temp = temp >> 1 ; 

       
     }
     


     

     for(int j= 0 ; j< mask; j++){
        cout<<arr[j]<<" " ;
     }



}