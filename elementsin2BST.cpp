class Solution {
public:
    void inorder(TreeNode* root , vector <int> &ans){
        if(root == NULL){
            return ;
        }

        inorder(root->left,ans) ;
         ans.push_back(root->val) ;
        inorder(root->right,ans) ;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
         vector <int> ans  ;
         inorder(root1,ans) ;
         inorder(root2,ans) ;

         sort(ans.begin() ,ans.end() ) ;
         return ans ;
    }
};
