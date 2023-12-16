class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l =arr.size();
        int ans = bSearch(arr , l );
        return ans ;
    }
//Here we see if the element is in increasing side of array then s=mid+1 ; else do e=mid because in other two conditions{decreasing side and peak element itself) peak element could be lost.
    int bSearch(vector<int>& arr , int n ){
        int s = 0 , e = n-1 ;
        int mid =s + (e-s)/2;
       
        while(s< e){
            if(arr[mid]<arr[mid+1]){//if its on the increasing side
                s= mid + 1 ;
            }

            else{
                e = mid ;
            }
            mid =s + (e-s)/2;
        }
        return s ;



    }
};