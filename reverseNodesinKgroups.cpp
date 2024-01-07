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
class Solution {
public:
    int getLength(ListNode* head){
        if(head == NULL) return 0 ;
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            temp=temp->next;count++;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL) return head ;
        int len = getLength(head) ;
        ListNode* dummy = new ListNode(0) ;
        dummy->next = head ;
        ListNode* pre = dummy;
        ListNode* cur  ;
        ListNode* nex ;
         while(len >= k) {
        cur = pre->next;
        nex = cur->next;
        for(int i=1;i<k;i++) {
            cur->next = nex->next;
            nex->next = pre->next;
            pre->next = nex;
            nex = cur->next;
        }
        pre = cur;
        len -= k;
    }
    return dummy->next ;
    }
};
