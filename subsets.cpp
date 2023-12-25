class Solution {
public:
    void solve(vector<int> nums ,vector <vector <int>> &ans, vector <int> output , int ind , int n){
        if(ind >= n){
            ans.push_back(output) ;
            return ;
        }

        // exclude
        solve(nums,ans,output,ind+1,n) ;

        //include
        output.push_back(nums[ind]) ;
        solve(nums,ans,output,ind+1,n) ;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector <int>> ans ;
        vector <int> output ;
        int n = nums.size() ;
        solve(nums,ans,output,0,n) ;
        return ans ;
    }
};
