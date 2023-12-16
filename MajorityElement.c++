#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main(){
    vector <int> nums ;
    //In this question assume that the Majority element is definetly present in the array . To get hold of this ,  first sort the array and then return the median of the array(The majority element would be median)

    int l =nums.size();
    int a ;
    cout<<"Enter the elements"<<endl ;
    for(int i=0;i<l;i++){
        cin>>a;
        nums.push_back(a);
    }

        int ans = 0,count=0;

        sort(nums.begin(), nums.end());
        

        if(l%2==0){
              ans = nums[(l/2)];

        }
        else{
            ans = nums[(l-1)/2];
        }

      
        return ans ;
    }
  
