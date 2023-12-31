#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;
/*
 Selection sort is used for small sized arrays 
 basic idea for heap sort
 in place algorithm
 */

void selectionSort(vector <int> & arr){
   

    for(int i=0 ; i < arr.size() -1 ; i++ ){

         int min = arr[i];

        for(int j= i + 1 ; j < arr.size() ; j ++){
            if(arr[j]<arr[min])
            min = j;

        }
        swap(arr[min] , arr[i]);
    }
}

int main(){

    vector <int> nums = {10 , 5 , 8 , 20 , 2 , 18} ;

    cout<<"Original Array"<<endl ;

    for(int i = 0 ; i < nums.size() ; i++)
    cout<<nums[i]<<" ";

    cout<<endl ;
   
   cout<<"Array after sorting Using Selection Sort"<<endl ;
   selectionSort(nums) ;

    for(int i = 0 ; i < nums.size() ; i++)
    cout<<nums[i]<<" ";




}