/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int countNodes(ListNode* head) {
        int cnt = 0;

        ListNode* temp = head;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }

    TreeNode* listToBST(ListNode*& head, int s, int e) {
        if (s > e) {
            return NULL;
        }

        int mid = (s + e) / 2;

        TreeNode* left = listToBST(head, s, mid - 1);
        TreeNode* root = new TreeNode(head->val);
        root->left = left;
        head = head->next;
        root->right = listToBST(head, mid + 1, e);
        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        int n = countNodes(head);
        return listToBST(head, 0, n - 1);
    }
};
