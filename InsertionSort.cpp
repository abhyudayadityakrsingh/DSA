#include<vector>
#include <iostream>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    /*Values from unsorted part of array is taken and placed in the correct position*/
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
             
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
            
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}

int main(){
    vector <int> arr = {1,4,3,7,9} ;
    int n = arr.size() ;
    insertionSort(n,arr) ;

    for(int i = 0 ; i < n ; i ++ ){
        cout << arr[i] << " " ;
    }
}