/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int co=0;
        ListNode* x=head;
        while(x->next!=NULL)
        {co++;
            x=x->next;
        }
        
        co=(co+1)/2;
        int k=0;
        x=head;
        while(k!=co)
        {k++;
            x=x->next;
        }
        return x;

    }
};
