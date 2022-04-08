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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        ListNode *curr=head;
        ListNode *newHead=head;

        int len=1;
        while(curr->next)//we want curr to be the last node and not null 
        {
            curr=curr->next;
            len++;
        }
        k=len-(k%len);
       // cout<<k;
        if(k==0 || k==len) return head;
        curr->next=head; //point last node to the head now itself since it will always point there on rotation
        curr=head;
        k--;
        while(k>0)
        {
            k--;
            curr=curr->next;
        }
        newHead=curr->next;
        curr->next=NULL;
        return newHead;
        
    }
};