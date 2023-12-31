#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std ;

 char getMaxOccuringChar(string str)

    {    int arr[26] = {0} ;
         int num = 0 ;
        for(int i = 0 ; i < str.length() ; i ++){
            char ch = str[i] ;
            if(ch >= 'a' && ch <= 'z'){
               num = ch - 'a' ;

            }
            else{
                num = ch -'A' ;
            }
            arr[num] ++ ;
        }
        int max = -1 ; int ans = 0 ;
        for(int i = 0 ; i < str.length() ; i ++){
            if(arr[i] > max){
                max = arr[i] ;
                ans = i ;

            }
        }

        char finalAns =  ans + 'a' ;
        return finalAns ;








        //
       /* // Your code here
        int max =1 ; char res ;
        for(int i = 0 ; i < str.length() ; i ++){
            char ch1 = str[i] ;
            int count = 1 ;
            for(int j = i+1 ; j < str.length() ; j ++){
                char ch2 = str[j] ;
                if(ch1 == ch2){
                    count ++ ;
                }
                
            }
            if(count > max){
                max = count ;
                res = ch1 ;
            }
        }
        return res ;
        
    }
*/
    }
int main() {

string name = "Abhyudaya";
cout<<"Max occuring character is : " <<getMaxOccuringChar(name) ;
}