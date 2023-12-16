#include<iostream>
#include<math.h>
using namespace std;

//LeetCode Question Number -1009
int main(){

int n ;
cout<<"Enter n"<<endl ;
cin>> n ;
int temp = n;
int mask = 0 ;//We create a mask variable to count the no. of 1's to be inserted from last
 if(n==0){
           return 1 ;// Edge Case
       }

while(temp!=0){
    mask = (mask << 1) | 1 ;//We left shift the mask variable to move the 0 bits to the left and then perform OR operation with 1 to set the bit as 1 
    temp = temp >> 1 ; // next we right shift the number to move to next bit -> We are doing this to count how many bits were there in original number
}
 int ans = (~n) & mask ; //Finally we get the answer by performing AND operation of mask variable and the negation of the original number in Decimal Format 
 cout<< ans << endl ;

}














    /*
    int n ;
    cout<<"Enter Number -"<<endl ;
    cin>>n ;
    int ans =0 ;
    int i =0;
    while(n != 0){
        int bit = n & 1 ;
        ans  =ans + (bit * pow(10,i));
        n=n>>1 ;
        i++;


    }
    cout<<"Binary- "<<ans <<endl ;
  int rev[32] ;
  int comp=0;
  int j=0;
  int temp =ans ;
  while(temp!=0){
    int bit = temp & 1 ;
    if(bit ==1 ){
        bit=0;
    }
    else{
        bit =1;

    }
    comp =comp + (bit* pow(10 ,j))
        j++ ;
    temp =temp>>1;

  }
cout<<"Complement"<<comp <<endl ;
*/

