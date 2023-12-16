#include <iostream>
using namespace std ;

//Leetcode ques -1491

int main(){
     int nums [10];
    cout<<"Enter Array";
    for(int i=0;i<10;i++){
        cin>>nums[i];
    }
    int l=nums.length ;
    double sum =0 ;
    int max= nums[0];
    int min =nums[0];
    for(int i=0;i<10;i++){
        if(max<nums[i])
        max=nums[i];
        else if(nums[i]<min)
        min=nums[i];

        sum+=nums[i];
    }

    return (sum-min-max)/(l-2) ;

}