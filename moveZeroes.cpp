#include <iostream>
#include <array>
#include <vector>
using namespace std ;
//Leetcode ques -283

int main(){
    vector <int> arr ={5, 1 , 3 ,0 , 4 , 15 ,0 ,0 , 12};
    int i = 0; 
    int len  = arr.size() ;

    for(int j = 0 ; j < len ; j++ ){
        if(arr[j] != 0){/*We simply just check if number id not 0 , then swap it and bring it forward
        -> Thus automatically bringing 0 towards end */
            swap(arr[j] , arr[i]) ;
            i ++ ;
        }
    }

    
     cout<<"The array now is ->"<<endl ;
    for(int i = 0; i<len ; i++){
        cout<<arr.at(i)<< " " ;

    }

     
}