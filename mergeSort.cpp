#include <iostream>
#include <vector>
#include <time.h>
using namespace std ;

void merge(vector <int> &arr  , int start , int mid , int end){
    int n1 = mid - end + 1 ;
    int n2 = end - start ;

    vector <int> left (n1);
    vector <int> right (n2) ;


    for(int i = 0 ; i < n1 ; i ++ ){
        left.push_back(arr[start + i]) ;
    }

    
    for(int i = 0 ; i < n2 ; i ++ ){
       right.push_back(arr[mid + i + 1]) ;
    }

    int i = 0 , j= 0 , k = start  ;

    while(i < n1 && j < n2){
        if(left[i] <= right[j]){
            arr[k ++] = left[i++] ;
        }
        else{
            arr[k++] = right[j ++] ;
        }
    }
    while(i < n1){
          arr[k ++] = left[i++] ;

    }
    while(j < n2){
           arr[k++] = right[j ++] ;
    }
}


void MergeSort(vector <int> &arr  , int start  ,int end){

    if(arr.size() == 1){
        return  ;
    }

 int mid = start + (end-start)/2 ;

 MergeSort(arr, start , mid) ;
 MergeSort(arr , mid + 1 , end) ;
 merge(arr , start , mid , end) ;


 

}

int main(){

    vector <int> arr = { 8 , 9 , 1 , 5 , 3 } ;
    cout << "Original Array : "<< endl ;

    for(int i = 0 ; i < arr.size() ; i ++ ){
        cout << arr[i] << " " ;
    }
    cout << endl ;
      cout << "Array after merge sort : "<< endl ;
      MergeSort(arr, 0 , arr.size() -1) ;

    for(int i = 0 ; i < arr.size() ; i ++ ){
        cout << arr[i] << " " ;
    }

    
    return 0 ;
}