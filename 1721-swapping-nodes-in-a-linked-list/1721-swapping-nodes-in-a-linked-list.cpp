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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *curr=head;
        ListNode *n1=head;ListNode *n2;
        int i=0,len=0;
        while(curr!=NULL)
        {
            len++;curr=curr->next;
        }
        curr=head;
        while(i!=k)
        {
            i++;
            n1=curr;
            curr=curr->next;
        }
        i=len-k;
        curr=head;
        while(i>=0)
        {
            n2=curr;
            i--;
            curr=curr->next;
        }
        swap(n1->val,n2->val);
        return head;
    }
};