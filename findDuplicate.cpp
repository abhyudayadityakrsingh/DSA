#include <iostream>
#include <array>
#include <vector>
using namespace std ;
// Leetcode Question -442

int main(){
    vector <int> arr = { 1 , 2 , 3 ,5 ,3 , 6 , 9 , 2 ,9 ,1 ,1 } ;
    vector <int> v ;


    for(int i = 0 ; i < arr.size()-1 ; i ++ ){
            int count = 0;
            for(int j = i+1 ; j<arr.size() ; j ++ ){
                if(arr[i] == arr[j]){
                    count ++ ;
                }


            }

            if(count == 2){
                v.push_back(arr[i]) ;

            }
           
    
    }
     cout<<" The array after modification is :" <<endl ;

            for(int i = 0 ;i<arr.size() ; i ++){
                cout << v[i] << " " ;
            }

}