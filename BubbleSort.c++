#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;

void bubbleSort(vector <int> & arr){

    bool flag = false ;

    for(int i=0; i<arr.size() ; i++ ){

        for(int j= 0 ; j < arr.size()-i -1 ; j++ ){//lasr element would already be sorted in every iteration , so reduce to n- i-1 

            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = true ;

            }
        }
        if(flag == false)// if array is already sorted 
        {
            break ;
        }
    }
}


int main(){

    vector <int> nums = {10 , 5 , 8 , 20 , 2 , 18} ;

    cout<<"Original Array"<<endl ;

    for(int i = 0 ; i < nums.size() ; i++)
    cout<<nums[i]<<" ";

    cout<<endl ;
   
   cout<<"Array after sorting Using Bubble Sort"<<endl ;
   bubbleSort(nums) ;

    for(int i = 0 ; i < nums.size() ; i++)
    cout<<nums[i]<<" ";




}

