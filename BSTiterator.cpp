class BSTIterator {
void inorder(TreeNode* root , vector <int> &ans)  {
    if(root == NULL)
      return ;

    inorder(root->left,ans) ;
    ans.push_back(root->val) ;
    inorder(root->right,ans) ;
}  
public:
 vector <int> ans ;
 int start = 0 ;
    BSTIterator(TreeNode* root) {
        inorder(root,ans) ;
    }
    
    int next() {
        if(start < ans.size() ){
            return ans[start++] ;
        }
        return -1; 
    }
    
    bool hasNext() {
        if(start < ans.size() ){
            return true ;
        }
        else{
            return false ;
        }
    }
};
