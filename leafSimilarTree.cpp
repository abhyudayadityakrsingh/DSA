/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root , vector <int> &ans){
        if(root==NULL) return ;
        inorder(root->left,ans) ;
        if(root->left == NULL && root ->right == NULL) ans.push_back(root->val) ;
        inorder(root->right,ans) ;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector <int> tree1  ;
        vector <int> tree2  ;
        inorder(root1,tree1) ;
        inorder(root2,tree2) ;
      int maxi  =max(tree1.size() ,tree2.size()) ;
        for(int i = 0 ; i <maxi ; i++ )
         { if(tree1[i] != tree2[i]) return false ;}

        return true ;

    }
};
