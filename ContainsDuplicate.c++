#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
//Leetcode ques -217
int main(){
     vector <int> nums ;



      int l =nums.size();
    int a ;
    cout<<"Enter the elements"<<endl ;
    for(int i=0;i<l;i++){
        cin>>a;
        nums.push_back(a);
    }



       
       bool flag =false ;

       sort(nums.begin(),nums.end());
       
        for(int i=1;i<nums.size();i++){
                if(nums[i]==nums[i-1])
                    flag= true;
            }

        
        return flag ;
}
