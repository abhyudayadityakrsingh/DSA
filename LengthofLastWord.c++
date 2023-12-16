#include <iostream>
#include <string>
using namespace std ;

    string validate(string str){
        string temp = "" ;
       for( int i = 0 ; i < str.length() ; i ++){
           char ch = str[i] ;

        if(ch >= 'a' && ch <= 'z' ){
            temp.push_back(ch) ;

        }
        else if(ch >= 'A' && ch <= 'Z' ){
            temp.push_back(ch) ;
        }

       }
        
        return temp ;

    }
    int lengthOfLastWord(string s) {
        validate(s) ;
        int size = s.length() -1 ;
        string word = "" ;
        char ch = s[size] ;

        while(ch != ' '){
            ch = s[size] ;
           word.push_back(ch) ;
           size -- ;
           cout << "Step :"<<size <<endl ;
           cout << word  << endl ;
        }
        cout << word ;
      return word.length() ;
    }


int main () {

    string str = "Hello World" ;
    cout << lengthOfLastWord(str)  ;

}