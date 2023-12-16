#include <iostream>
using namespace std ;
int main(){//Leetcode question -338
    int n ;
    cout<<"Enter n "<<endl ;
    cin>>n ;
    int arr[n+1];

for(int i=0; i<=n ;i++){
    int res= 0;
    int temp = i;

    while(temp!=0){
        res ++ ;//incrementing the count variable
        temp = temp & (temp -1);// by performing and of n and n-1 we iterate back to previous values.
    }
    arr[i]=res ;
}
for(int i=0 ;i<= n ; i++){
    cout<<arr[i] ;
}
    


    
}

  /*  for(int i=0; i<=n ;i++){
             int count =0;
             int temp = i ;
            while(temp != 0){
                int bit = i & 1;
                if(bit == 1){
                    count ++ ;
                }
                temp = temp & (temp -1) ;
            }
            arr[i] =count ;

        }
       for(int i=0;i<n+1;i++){
        cout<<arr[i]<<endl ;
       }*/


 