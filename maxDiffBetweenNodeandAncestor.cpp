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
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL) return 0;
        int mini = root->val ;
        int maxi = root->val ;
        diff(root,maxi,mini) ;
        return difference ;
    }
private :
 int difference = 0 ;
    void diff(TreeNode* root, int maxi , int mini){
        if(root==NULL) return;
        difference = max(difference , max(abs(mini-root->val) , abs(maxi-root->val)));
        mini = min(mini,root->val) ;
        maxi = max(maxi,root->val) ;

        diff(root->left,maxi,mini) ;
        diff(root->right,maxi,mini);
        

    }
};
