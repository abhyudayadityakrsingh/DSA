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
    int currentVal = 0 ;
    int currentCount = 0 ;
    int maxCount = 0 ;
    void inorder(TreeNode* root, vector <int> &mode){
        if(root == NULL) return ;
        inorder(root->left,mode) ;

        if(root -> val == currentVal){
            currentCount ++ ;  
        }
        else {
            currentVal = root->val ;
            currentCount = 1 ;
        }

        if(currentCount == maxCount){
             mode.push_back(root->val) ;
        }
        else if(currentCount > maxCount) {
            maxCount = currentCount ;
            mode.clear() ;
            mode.push_back(currentVal) ;
        }
        inorder(root->right,mode) ;
    }
    vector<int> findMode(TreeNode* root) {
        vector <int> mode ;
        inorder(root,mode) ;
        return mode ;
    }
};
