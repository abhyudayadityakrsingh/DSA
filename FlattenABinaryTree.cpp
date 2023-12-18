class Solution {
public:
    void flatten(TreeNode* root) {
        //Use of Morris Traversal
        TreeNode* curr = root ;
        while(curr != NULL){
            if(curr -> left){
                TreeNode* pre = curr -> left ;
                while(pre->right){
                    pre = pre->right;
                }
                pre ->right = curr->right;
                curr->right = curr -> left ;
            }
            curr = curr -> right ;
        }
        //left part
        curr = root ;
        while(curr != NULL){
            curr -> left = NULL ;//left part has to be NULL and right part has to be attached in the linked list
            curr = curr-> right ;
        }
        
    }
};
