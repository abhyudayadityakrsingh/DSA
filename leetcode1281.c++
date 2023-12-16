#include <iostream>
using namespace std ;
int main(){
    int n ;
    cin>>n;
    int m=1, sum =0;
    while(n!=0){
        int lastDig = n%10 ;
        m*=lastDig;
        sum+=lastDig;
        n/=10;
    }
    cout<<(m-sum)<<endl ;

}