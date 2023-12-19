#include <iostream>
#include <string>
using namespace std ;

string reverseWords(string str){
    

    for(int i = 0 ; i < str.length() ; i ++){
        string temp = "" ;
        int count  =0 ;
        
        while(str[i] != " "){
            char ch = str[i] ;
            temp = temp + ch ;
            i ++ ;
            count  = i ;
        }
        

        i = count ;
    }

}
int main(){

    string sentence ;
    cout << "Enter the sentence : " << endl ;
    cin >> sentence ;

   
    cout<< "The string after reversing is : =>  " <<  reverseWords(sentence) << endl;


    

    

}