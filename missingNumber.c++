#include <iostream>
#include <algorithm>
#include <vector>
using namepsace std ;

//Leetcode question -268

 int missingNumber(vector<int>& nums) {
        int start = 0 ; int end = nums.size() ; 
    int mid = start +(end-start)/2 ; 
    sort(nums.begin() , nums.end());
    while(start<end){
        if(nums[mid]==mid){
            start = mid+1 ; 
        }
        else 
        end = mid ; 
        mid = start +(end-start)/2 ;
    }
    return start ;
}

int main (){
  vector<int> arr = {3 , 0 , 1} ;
  cout<<"Element not present is :"<<missingNumber(arr) ;
}