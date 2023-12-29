class Solution {
public:
    void merge(vector<int> &nums, int l, int r, int mid)
    {
        vector<int>temp(r-l+1);
        int i=l, j=mid+1;
        int k=0;
        while(i<=mid || j<=r)
        {
            if(i>mid)
            {
                temp[k]=nums[j];
                k++;
                j++;
            }
            else if(j>r)
            {
                temp[k]=nums[i];
                k++;
                i++;
            }
            else
            {
                
                if(nums[i]<nums[j])
                {
                    temp[k]=nums[i];
                    i++;
                }
                else
                {
                    temp[k]=nums[j];
                    j++;
                }
                k++;
            }
        }
        for(int m=0; m<r-l+1; m++)
        {
            nums[m+l]=temp[m];
        }

    }
    
    void mergeSort(int s ,int e , vector <int> &nums){
        if( s >= e)  return ;

        int mid = (s+e)/2 ;
        mergeSort(s,mid,nums) ;
        mergeSort(mid+1,e,nums) ;
        merge(nums,s,e,mid) ;
    }
    vector<int> sortArray(vector<int>& nums) {
        int s = 0 ;
        int e = nums.size()-1 ;
        mergeSort(s,e,nums) ;
        return nums ;
    }
};
