#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;

string replaceSpaces(string str){
    string temp = "" ;
    for(int i = 0 ; i < str.length() ; i ++ ){
            char ch = str[i] ;

        if (ch != ' '){
        
            temp = temp + ch ;
        }
        else{
              temp.push_back('@');
              temp.push_back('4');
              temp.push_back('0');
        }
    }

    return temp ;

}

int main () {
    string str = "Hello World" ;
    cout << " Output : " << endl ;
    cout << replaceSpaces(str) ;

}