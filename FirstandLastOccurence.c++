#include <iostream>
#include <algorithm>
using namespace std ;

//Leetcode question -34

int firstOCC(int arr[] , int n , int key)
{
    int s= 0 , e = n-1 ;
    int mid = s + (e-s)/2 ;
    int ans =-1 ;

    while(s<=e){
        /*For example if array={1,2,3,3,4,5} Let say if the key =3.*/

        if(arr[mid]==key){
            ans = mid ;
            e = mid -1 ;//Now check in left part


        }
        else if(arr[mid]<key){//Check in the right part
        s=mid +1 ;

        }
        else if(arr[mid]>key){// Check in left part
        e= mid -1 ;
           

        }

        int mid = s + (e-s)/2 ;
    }
    return ans ;

}


int lastOCC(int arr[] , int n , int key)
{
    int s= 0 , e = n-1 ;
    int mid = s + (e-s)/2 ;
    int ans =-1 ;

    while(s<=e){
        /*For example if array={1,2,3,3,4,5} Let say if the key =3.*/

        if(arr[mid]==key){
            ans = mid ;
            s = mid -1 ;//Now check in left part


        }
        else if(arr[mid]<key){//Check in the right part
        s=mid +1 ;

        }
        else if(arr[mid]>key){// Check in left part
        e= mid -1 ;
           

        }

        int mid = s + (e-s)/2 ;
    }
  return ans ;
}



int main(){

     /* int n ;
    cout<<"Enter size of array"<<endl ;
    cin>>n ;
    int arr[n];

    cout<<"Enter the array"<<endl ;
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }*/


    int even [6]={1,2,3,3,4,5};
    int odd [5]={1,2,3,3,4};

}