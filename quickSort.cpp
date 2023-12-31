#include <iostream>
#include <vector>
using namespace std ;
int partition(int arr[] , int low , int high){
    int pivot  = arr[high] ;
    int i = low -1 ;
    for(int j = low ; j <= high-1 ; j ++ ){
        if(arr[j] < pivot){
            i ++ ;
            swap(arr[i] , arr[j]) ;
        }
     }
     swap(arr[i+1] , arr[high]) ;
     return (i + 1) ;
}

void quickSort(int arr[] , int low , int high){
    if(low  < high){
        int pi = partition(arr , low , high) ;
        quickSort(arr , low , pi-1) ;
        quickSort(arr , pi + 1 , high) ;
    }

    }


int main(){
    int arr[6] = {9,1,4,8,7,3} ;
    quickSort(arr , 0 , 5) ;
    cout << "Sorted Array : "<<endl ;
    for(int i = 0 ; i < 6 ; i ++ ){
        cout << arr[i] << " ";
    }
}

