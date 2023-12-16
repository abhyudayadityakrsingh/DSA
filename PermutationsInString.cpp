#include <iostream>
#include <string>
using namespace std ;
//Leetcode Ques - 567 -> Permutations in a string

bool checkEqual (int a[26] , int b[26]){
    for(int i = 0 ; i < 26 ; i ++){
        if(a[i] != b[i])
        return 0 ;
    }
    return 1 ;
}

bool Checkpermutation(string s1 , string s2){

    //To store character count
    int count1 [26] ;
    for(int i = 0 ; i < s1.length() ; i ++){
        int index = s1[i] - 'a' ;
        count1[index] ++ ;
    } 

    // Traverse s2 string in window of s1 length and compare

    int i = 0 ;
    int windowSize = s1.length() ;
    int count2 [26] = {0} ;
    //Running for first window 

    while(i < windowSize){
        int index = s2[i] - 'a' ;
        count2[index] ++ ;
        i ++ ;
    }

    if(checkEqual(count1 , count2))
    return 1 ;

    //Proceed to next windows
    while(i < s2.length()){
        char newChar = s2[i] ;
        int index = newChar - 'a' ;
        count2[index] ++ ;

        char oldChar = s2[i-windowSize] ;
        index = oldChar - 'a' ;
        count2[index] -- ;

        i ++ ;

        if(checkEqual(count1 , count2))
        return 1 ;
    }
    return 0 ;

}
 
int main () {
    string s1 = "ab" ;
    string s2 = "eidbaooo" ;

    cout << "The answer : " << Checkpermutation(s1,s2) ;



}
